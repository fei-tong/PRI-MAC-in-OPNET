MIL_3_Tfile_Hdr_ 145A 140A modeler 9 4BF2825F 4C137E08 1CC china-0f9728557 Administrator 0 0 none none 0 0 none B1DEE0A 906F 0 0 0 0 0 0 1e80 8                                                                                                                                                                                                                                                                                                                                                                                 ЋЭg      @  |    л  п  %Ц       $  (  4  g  k  %К   
   Send GM Timer   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ             Start Schedule Timer   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ             Sleep Factor    џџџџџџџ    џџџџ   	      џџџџ         џџџџ          џџџџ         2      џџџџ      38      &џџџџ         Must larger than 1.   GTo keep the same duty cycle as S-MAC(5%), Sleep Factor should be set 38ЅZ                Must       be       larger       than       1.   CW   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ                
Contention       Window   durRTS   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ                duration       for       sending       RTS   durCTS   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ                duration       for       sending       CTS   durDATA   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ                duration       for       sending       DATA   durACK   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ                duration       for       sending       ACK   DIFS   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ             SIFS   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ                    begsim intrpt         
   џџџџ   
   doc file            	nd_module      endsim intrpt         
   џџџџ   
   failure intrpts            disabled      intrpt interval         дВI­%У}џџџџ      priority              џџџџ      recovery intrpts            disabled      super priority             џџџџ          E   Objid	\process_id;       Objid	\node_id;       int	\node_address;       int	\grade;       double	\send_gm_timer;       double	\start_schedule_timer;       int	\sleep_factor;       Evhandle	\send_gm_event;       /* Contention Window */   double	\CW;       double	\DIFS;       double	\SIFS;       double	\durRTS;       double	\durCTS;       double	\durDATA;       double	\durACK;       double	\durSleep;       double	\durActive_half;       Evhandle	\wait_RTS_event;       Boolean	\transceiver_state;       Objid	\rx_id;       double	\waking_time;       Evhandle	\send_RTS_event;       double	\second_contending_time;       Evhandle	\wait_CTS_event;       Evhandle	\wait_ACK_event;       int	\next_hop_1;       int	\next_hop_2;       Evhandle	\send_CTS_event;       Evhandle	\wait_DATA_event;       double	\record_time;       double	\all_sleeped_time;       double	\all_active_time;       double	\all_rx_time;       double	\all_tx_time;       
   Packet* pk_TV=NULL;   int pk_type;   double time;   int dest_TV;   int grade_TV;   int hop_num_TV;   //File   	FILE *in;   char temp_file_name[300];   //char message[100];   >   //Define packet type   #define grade_pk  1   #define rts_pk    2   #define cts_pk    3   #define ack_pk    4   #define data_pk   5       //Define queue type   #define grade_queue		0   #define data_queue		1       //Define stream in-out NO.   #define SRC_STRM 		1   #define RCV_STRM 		0   #define SEND_STRM 		0   #define DISCARD_STRM 	1       //Define node state   /*   #define initial			0   #define waking			1   &#define awake			2//go to sending state   #define sleeping		3   #define asleep			4   */       5//Define self-interrupt code and transition condition   #define SEND_GM_CODE					6000   ##define START_SCHEDULE_CODE				7000    #define TO_WAKE_UP_CODE					8000   &#define WAKING_TO_SEND_RTS_CODE			9000   #define SEND_RTS_CODE					10000    #define SEND_DATA_CODE					20000   #define SEND_CTS_CODE					30000   #define SEND_ACK_CODE					40000   '#define SLEEP_FROM_SECOND_CODE 			50000   %#define SLEEP_FROM_FIRST_CODE			60000       B#define END	        		    	(op_intrpt_type() == OPC_INTRPT_ENDSIM)   `#define FROM_LOWER					((op_intrpt_type() == OPC_INTRPT_STRM) && (op_intrpt_strm() == RCV_STRM))   `#define FROM_UPPER					((op_intrpt_type() == OPC_INTRPT_STRM) && (op_intrpt_strm() == SRC_STRM))   n#define SEND_GM                 	((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SEND_GM_CODE))       n#define START_SCHEDULE				((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == START_SCHEDULE_CODE))   U#define WAKING_TO_WAIT_RTS			(START_SCHEDULE && grade>0 && grade%(sleep_factor+2)==1)   V#define CONTEND_TO_SEND_RTS			(START_SCHEDULE && grade>0 && grade%(sleep_factor+2)==2)   m#define GO_TO_SLEEP					(START_SCHEDULE && grade>0 && (grade%(sleep_factor+2)>=3||grade%(sleep_factor+2)==0))       f#define WAKING_UP					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == TO_WAKE_UP_CODE))   u#define WAKING_TO_SEND_RTS			((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == WAKING_TO_SEND_RTS_CODE))   c#define SEND_RTS					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SEND_RTS_CODE))   e#define SEND_DATA					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SEND_DATA_CODE))   c#define SEND_CTS					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SEND_CTS_CODE))   c#define SEND_ACK					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SEND_ACK_CODE))   s#define SLEEP_FROM_SECOND			((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SLEEP_FROM_SECOND_CODE))   q#define SLEEP_FROM_FIRST			((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SLEEP_FROM_FIRST_CODE))   @#define CHECK_CHANNEL				((op_intrpt_type() == OPC_INTRPT_STAT))       //function prototype   'static void grade_pk_proc(Packet * pk);   %static void upper_data_pk_proc(void);   static void power_stat(void);          //Deal with grade pk   static void   grade_pk_proc(Packet * pk)   {   //var   "	int grade_in_pk;//,sink_id_in_pk;   //in   	FIN(grade_pk_proc(pk));   //body   (	op_pk_nfd_get(pk,"Grade",&grade_in_pk);   .	//op_pk_nfd_get(pk,"Sink ID",&sink_id_in_pk);   	   	if(grade<0)   	{   		grade = grade_in_pk;   		//sink_id = sink_id_in_pk;   		   		++grade_in_pk;   (		op_pk_nfd_set(pk,"Grade",grade_in_pk);   		   (		//cancel the previous event if pending    		if(op_ev_valid(send_gm_event))   		{   			op_ev_cancel(send_gm_event);   		}   '		//at the same time, clear grade_queue   -		if(op_subq_empty(grade_queue) == OPC_FALSE)   		{   			op_subq_flush(grade_queue);   		}   		   3		op_subq_pk_insert (grade_queue,pk,OPC_QPOS_TAIL);   l		send_gm_event = op_intrpt_schedule_self(op_sim_time() + op_dist_exponential(send_gm_timer), SEND_GM_CODE);   		   		FOUT;   	}   	   	if(grade_in_pk < grade)   	{   		grade = grade_in_pk;    		//if(sink_id != sink_id_in_pk)   		//{   		//	sink_id = sink_id_in_pk;   		//}   			   		++grade_in_pk;   (		op_pk_nfd_set(pk,"Grade",grade_in_pk);   		   (		//cancel the previous event if pending    		if(op_ev_valid(send_gm_event))   		{   			op_ev_cancel(send_gm_event);   		}   '		//at the same time, clear grade_queue   -		if(op_subq_empty(grade_queue) == OPC_FALSE)   		{   			op_subq_flush(grade_queue);   		}   		   3		op_subq_pk_insert (grade_queue,pk,OPC_QPOS_TAIL);   l		send_gm_event = op_intrpt_schedule_self(op_sim_time() + op_dist_exponential(send_gm_timer), SEND_GM_CODE);   		   		FOUT;   	}   	   	op_pk_destroy(pk);   	   //out   	FOUT;   }        //Received DATA from upper layer   static void    upper_data_pk_proc(void)   {   //var   	Packet* upper_pk;   //in   	FIN(upper_data_pk_proc());   //body    	upper_pk = op_pk_get(SRC_STRM);   (	op_pk_nfd_set(upper_pk,"Type",data_pk);   ,	op_pk_nfd_set(upper_pk,"Src",node_address);   '	op_pk_nfd_set(upper_pk,"Grade",grade);   	   7	op_subq_pk_insert (data_queue,upper_pk,OPC_QPOS_TAIL);   K	printf("Have inserted the received DATA from \"gsrc\" into DATA queue\n");   //out   	FOUT;   }       )//In "end" state, proceed power statistic   static void   power_stat(void)   {   //var   
	FILE *in;   	char temp_file_name[300];   //in   	FIN(power_stat(void));   //vody   A	op_ima_obj_attr_get(node_id,"Power Record File",temp_file_name);   (	if(strcmp(temp_file_name,"disable")!=0)   	{	   "		in = fopen(temp_file_name,"at");   		/*   0		fprintf(in,"Begin->Node:%d\r\n",node_address);   R		fprintf(in,"Sleep_time	Active_time	Tx_time		Rx_time		Idle_time	duty_cycle\r\n");   &		fprintf(in,"%f	%f	%f	%f	%f	%f\r\n",\   			all_sleeped_time,all_active_time,all_tx_time,all_rx_time,all_active_time-(all_tx_time+all_rx_time),all_active_time/(all_active_time+all_sleeped_time));   		   		//fprintf(in,"CE\r\n");   		*/   |		fprintf(in,"%f\r\n",all_sleeped_time*0.05+(all_active_time-(all_tx_time+all_rx_time))*0.45+(all_tx_time+all_rx_time)*0.5);   		   e		//fprintf(in,"%f\r\n",all_sleeped_time*0.015+(all_active_time-all_tx_time)*13.5+all_tx_time*24.75);   		/*   >		fprintf(in,"Simulation_time	CE	Average_power_consumed\r\n");   	   +		fprintf(in,"%f	%f	%f\r\n",op_sim_time(),\   j				all_sleeped_time*0.05+(all_active_time-(all_tx_time+all_rx_time))*0.45+(all_tx_time+all_rx_time)*0.5,\   				(all_sleeped_time*0.05+(all_active_time-(all_tx_time+all_rx_time))*0.45+(all_tx_time+all_rx_time)*0.5)/(all_sleeped_time+all_active_time));   		   		fprintf(in,"End\r\n\r\n");   		*/   		fclose(in);   	}	   //out   	FOUT;   }                                          Z            
   init   
       
   &   // Obtain related ID   process_id = op_id_self();   &node_id = op_topo_parent(process_id);   7rx_id = op_id_from_name(node_id,OPC_OBJTYPE_RARX,"rx");   	   //obtain parameter   P//op_ima_obj_attr_get(process_id, "Start Grade Timer", &start_grade_timer);		//1   Hop_ima_obj_attr_get(process_id, "Send GM Timer", &send_gm_timer);				//2   Sop_ima_obj_attr_get(process_id, "Start Schedule Timer", &start_schedule_timer);	//3   Gop_ima_obj_attr_get(process_id, "Sleep Factor", &sleep_factor);					//4   7op_ima_obj_attr_get(process_id, "CW",&CW);										//5   =op_ima_obj_attr_get(process_id, "durRTS",&durRTS);								//6   =op_ima_obj_attr_get(process_id, "durCTS",&durCTS);								//7   >op_ima_obj_attr_get(process_id, "durDATA",&durDATA);							//8   =op_ima_obj_attr_get(process_id, "durACK",&durACK);								//9   ;op_ima_obj_attr_get(process_id, "DIFS",&DIFS);									//10   ;op_ima_obj_attr_get(process_id, "SIFS",&SIFS);									//11       7op_ima_obj_attr_get(node_id, "user id", &node_address);   8op_ima_obj_attr_get(rx_id, "state", &transceiver_state);       grade = -1;   //sink_id = -1;       all_sleeped_time = 0;   all_active_time = 0;   all_tx_time = 0;   all_rx_time = 0;       M//durActive contains two parts: durReceive & durSedn, and durReceive==durSend   AdurActive_half = 2*CW+durRTS+durCTS+durDATA+durACK+2*DIFS+2*SIFS;   )durSleep = sleep_factor * durActive_half;       Sop_intrpt_schedule_self(op_sim_time() + start_schedule_timer, START_SCHEDULE_CODE);       <//op_ima_obj_attr_get (process_id, "subqueue", &subq_objid);   A//num_subqs = op_topo_child_count (subq_objid, OPC_OBJTYPE_SUBQ);   &//printf("згЖгСаИіЪ§:%d\n",num_subqs);   
       
      /*   @op_ima_obj_attr_get(node_id,"Grade Record File",temp_file_name);   remove(temp_file_name);   7op_ima_obj_attr_get(node_id,"Log File",temp_file_name);   remove(temp_file_name);   */   if(node_address == 1)   {   8	op_ima_obj_attr_get(node_id,"Log File",temp_file_name);   !	in = fopen(temp_file_name,"at");   	   R	fprintf(in,"Begin:\r\ndurActive_half: %f, durSleep: %f.(in \"gmac->init\")\r\n",\   		durActive_half,durSleep);   "	fprintf(in,"duty cycle:%f.\r\n",\   1			durActive_half*2/(durActive_half*2+durSleep));   	fclose(in);   }   /*   'if(strcmp(temp_file_name,"disable")!=0)   {	   5	printf("Node:%d, ДЫНкЕуПЩВњЩњМЧТМ.\n",node_address);   !	in = fopen(temp_file_name,"at");   ;	fprintf(in,"Simulation_time		Average_power_consumed\r\n");   	fclose(in);   }   */   
       
   џџџџ   
          pr_state        J            
   idle   
       
      if(END)   {   A	op_ima_obj_attr_get(node_id,"Grade Record File",temp_file_name);   	   !	in = fopen(temp_file_name,"at");   *	fprintf(in,"НкЕуЃК%d, ЦфМЖБ№ЮЊЃК%d\r\n",\   		node_address,grade);   	fclose(in);   }        //Received DATA from upper layer   if(FROM_UPPER)   {   F	printf("In \"idle\" state: received DATA which is from \"gsrc\".\n");   	upper_data_pk_proc();   }   
                         џџџџ             pr_state           :          
   GM proc   
       
      pk_TV = op_pk_get(RCV_STRM);   %op_pk_nfd_get(pk_TV,"Type",&pk_type);   if(pk_type == grade_pk)   {   	grade_pk_proc(pk_TV);   }   else   {   	op_pk_destroy(pk_TV);   o	op_sim_end("Waiting Grade Message Err: Are you kidding me?","I'm waiting Grade Message","Not you","ФуИіЩЕЁС");       }   
                     
   џџџџ   
          pr_state            в          
   send gm   
       
   	   +if(op_subq_empty(grade_queue) == OPC_FALSE)   {   7	pk_TV = op_subq_pk_remove(grade_queue, OPC_QPOS_HEAD);   	op_pk_send(pk_TV,SEND_STRM);   }   else   {   G	op_sim_end("Err: grade queue is empty, simulation is over!","","","");   }   
                     
   џџџџ   
          pr_state      	  :            
   sleeping   
       
   Z   @if(op_intrpt_code() == START_SCHEDULE_CODE)// from "GO_TO_SLEEP"   {	    	if(grade % (sleep_factor+2)>=3)   	{   C		time = durSleep - ((grade%(sleep_factor+2))-3)*durActive_half;			   	}   %	else if(grade % (sleep_factor+2)==0)   	{   8		time = durSleep - ((sleep_factor+2)-3)*durActive_half;   	}   	else   	{   R		op_sim_end("ЗТецГіДэ","grade%(sleep_factor+2)ВЛДѓгк3Лђ0","ЧыЗДЫМ","БПЕАЁЂЩЕЁС");   	}   	/*   8	op_ima_obj_attr_get(node_id,"Log File",temp_file_name);   !	in = fopen(temp_file_name,"at");   y	fprintf(in,"Node:%d, Grade:%d, Grade%%(%d+2): %d, time:%f, enter into \"sleeping\"state, been \"asleep\" for: %f.\r\n",\   V		node_address,grade,sleep_factor,grade%(sleep_factor+2),op_sim_time(),durSleep-time);   	fclose(in);   	*/   /	//set timer,when wake up, go to "waking" state   @	op_intrpt_schedule_self(op_sim_time() + time, TO_WAKE_UP_CODE);   	   :	printf("Node:%d, Grade:%d, time:%f,in sleeping period.\n\   			Initial to sleeping.\n\   (			After %f seconds, go to wake up.\n",\   *			node_address,grade,op_sim_time(),time);   	   	//time statistic   	record_time = op_sim_time();   }   else   Fif(op_intrpt_code() == SLEEP_FROM_FIRST_CODE)//sleep from first period   {   *	//time = CW+durCTS+durDATA+durACK+3*SIFS;   5	time = waking_time + durActive_half - op_sim_time();   		   0	//when wake up, go to "second contention" state   H	op_intrpt_schedule_self(op_sim_time() + time, WAKING_TO_SEND_RTS_CODE);   	   :	printf("Node:%d, Grade:%d, time:%f,in sleeping period.\n\   (			To sleeping from the first period.\n\   .			After %f seconds, go to second period.\n",\   *			node_address,grade,op_sim_time(),time);   	   	//time statistic   ?	all_active_time = all_active_time+(op_sim_time()-record_time);   	record_time = op_sim_time();   }   else   Hif(op_intrpt_code() == SLEEP_FROM_SECOND_CODE)//sleep from second period   {   	   K	time = second_contending_time + durActive_half + durSleep - op_sim_time();   	   %	//when wake up, go to "waking" state   @	op_intrpt_schedule_self(op_sim_time() + time, TO_WAKE_UP_CODE);   	   :	printf("Node:%d, Grade:%d, time:%f,in sleeping period.\n\   %			To sleeping from second period.\n\   2			After %f seconds, go to \"wakeing\" state.\n",\   *			node_address,grade,op_sim_time(),time);   	   	//time statistic   ?	all_active_time = all_active_time+(op_sim_time()-record_time);   	record_time = op_sim_time();   }        //Received DATA from upper layer   if(FROM_UPPER)   {   J	printf("In \"sleeping\" state: received DATA which is from \"gsrc\".\n");   	upper_data_pk_proc();   }       $if(FROM_LOWER && !transceiver_state)   {	   $	op_pk_destroy(op_pk_get(RCV_STRM));   J	printf("Node:%d, time:%f. Node is sleeping, destroy the received pk.\n",\   			node_address,op_sim_time());   }   if(END)   {   C	all_sleeped_time = all_sleeped_time + (op_sim_time()-record_time);   	power_stat();   }   //close transceiver   transceiver_state = OPC_FALSE;   7op_ima_obj_attr_set(rx_id, "state", transceiver_state);   
       
       
           џџџџ             pr_state      
  :   в          
   waking   
       
           //Log record   if(WAKING_TO_WAIT_RTS)   {   	/*   8	op_ima_obj_attr_get(node_id,"Log File",temp_file_name);   !	in = fopen(temp_file_name,"at");   Z	fprintf(in,"Node:%d, Grade:%d, Grade%%4: %d, time:%f, enter into \"waking\" state.\r\n",\   -		node_address,grade,grade%4, op_sim_time());   	fclose(in);   	*/   	record_time = op_sim_time();   }	           //enable transceiver   transceiver_state = OPC_TRUE;   7op_ima_obj_attr_set(rx_id, "state", transceiver_state);       waking_time = op_sim_time();       time = CW+DIFS+durRTS;   Vwait_RTS_event = op_intrpt_schedule_self(op_sim_time() + time, SLEEP_FROM_FIRST_CODE);       Tprintf("Node:%d, Grade:%d, time:%f, entered into first period (\"waking\" state).\n\   	    Waiting RTS.\n\   0		If no RTS, after %f seconds, go to sleep.\n",\   )		node_address,grade,op_sim_time(),time);       //time statistic   Dall_sleeped_time = all_sleeped_time + (op_sim_time() - record_time);   record_time = op_sim_time();   
                     
   џџџџ   
          pr_state        :  :          
   second contention   
       
   4       //Log record   if(CONTEND_TO_SEND_RTS)   {   	/*   8	op_ima_obj_attr_get(node_id,"Log File",temp_file_name);   !	in = fopen(temp_file_name,"at");   e	fprintf(in,"Node:%d, Grade:%d, Grade%%4: %d, time:%f, enter into \"second contention\" state.\r\n",\   ,		node_address,grade,grade%4,op_sim_time());   	fclose(in);   	*/   	record_time = op_sim_time();   }           /*   1. check data_queue   5   if(Y) open transceiver, contending for sending RTS      if(N) go to sleep   */       //enable transceiver   transceiver_state = OPC_TRUE;   7op_ima_obj_attr_set(rx_id, "state", transceiver_state);           'second_contending_time = op_sim_time();   Cif(op_subq_empty(data_queue) == OPC_FALSE)//data queue is not empty   {   #	time = op_dist_uniform(CW) + DIFS;   L	send_RTS_event = op_intrpt_schedule_self(op_sim_time()+time,SEND_RTS_CODE);   	   9	printf("Node:%d, Grade:%d, time:%f, in second period.\n\   6			data_queue is not empty, Contending to send RTS.\n\   			Waiting to send RTS.\n",\   %			node_address,grade,op_sim_time());   N	//sprintf(message,"Contend to send RTS, op_dist_uniform(CW)=%f\n",time-DIFS);   	//op_sim_message("",message);   }   &else//data queue is empty, go to sleep   {   ?	op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_SECOND_CODE);   	   9	printf("Node:%d, Grade:%d, time:%f, in second period.\n\   			data_queue is empty.\n\    			Go to sleep immediately.\n",\   %			node_address,grade,op_sim_time());   }       //time statistic   Ball_sleeped_time = all_sleeped_time + (op_sim_time()-record_time);   record_time = op_sim_time();   
                     
   џџџџ   
          pr_state        В  В          
   wait CTS   
       
      
//send RTS   if(pk_TV!=NULL)   {   	op_pk_destroy(pk_TV);   }       'pk_TV = op_pk_create_fmt("MAC_RTS_PK");   %op_pk_nfd_set(pk_TV, "Type", rts_pk);   )op_pk_nfd_set(pk_TV,"Src", node_address);   #op_pk_nfd_set(pk_TV,"Grade",grade);       op_pk_send(pk_TV, SEND_STRM);       //time statistic   #all_tx_time = all_tx_time + durRTS;       2//set timer for waiting CTS from lower grade nodes   time = durRTS+CW+DIFS+durCTS;   Vwait_CTS_event = op_intrpt_schedule_self(op_sim_time() + time,SLEEP_FROM_SECOND_CODE);       8printf("Node:%d, Grade:%d, time:%f, in second period.\n\   		Have sent RTS.\n\   		Waiting to receive CTS.\n\   0		If no CTS, after %f seconds, go to sleep.\n",\   )		node_address,grade,op_sim_time(),time);   
                     
   џџџџ   
          pr_state        ю            
   first   
       
       //Received DATA from upper layer   if(FROM_UPPER)   {   G	printf("In \"first\" state: received DATA which is from \"gsrc\".\n");   	upper_data_pk_proc();   }       if(END)   {   ?	all_active_time = all_active_time+(op_sim_time()-record_time);   	power_stat();   }   
                         џџџџ             pr_state        ю  ў          
   second   
       
       //Received DATA from upper layer   if(FROM_UPPER)   {   H	printf("In \"second\" state: received DATA which is from \"gsrc\".\n");   	upper_data_pk_proc();   }   if(END)   {   A	all_active_time = all_active_time + (op_sim_time()-record_time);   	power_stat();   }   
                         џџџџ             pr_state        *  В          
   RCV(2)   
       
   N   if(pk_TV!=NULL)   {   	op_pk_destroy(pk_TV);   }       pk_TV = op_pk_get(RCV_STRM);   %op_pk_nfd_get(pk_TV,"Type",&pk_type);       if(pk_type == rts_pk)   {   	//time statistic   $	all_rx_time = all_rx_time + durRTS;   	   E	//RTS listening during contending to send RTS("uniform(CW)+durDIFS")    	if(op_ev_valid(send_RTS_event))   	{   		op_ev_cancel(send_RTS_event);   @		op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_SECOND_CODE);   		   :		printf("Node:%d, Grade:%d, time:%f, in second period.\n\   B				Failure to send RTS, because received RTS from other nodes.\n\   !				Go to sleep immediately.\n",\   &				node_address,grade,op_sim_time());   	}   }       if(pk_type == cts_pk)   {   	//time statistic   $	all_rx_time = all_rx_time + durCTS;   	   (	op_pk_nfd_get(pk_TV,"Grade",&grade_TV);   &	op_pk_nfd_get(pk_TV,"Dest",&dest_TV);   3	if(grade == grade_TV+1 && dest_TV == node_address)   	{   @		if(op_ev_valid(wait_CTS_event))//the first time to receive CTS   		{    			op_ev_cancel(wait_CTS_event);   *			op_pk_nfd_get(pk_TV,"Src",&next_hop_2);   			    			//wait SIFS time to send DATA   			time = SIFS;   >			op_intrpt_schedule_self(op_sim_time()+time,SEND_DATA_CODE);   			   ;			printf("Node:%d, Grade:%d, time:%f, in second period.\n\   "					Successfully received CTS.\n\   					Waiting to send DATA.\n",\   '					node_address,grade,op_sim_time());   		}   	}   }       if(pk_type == ack_pk)   {   	//time statistic   $	all_rx_time = all_rx_time + durACK;   	   &	op_pk_nfd_get(pk_TV,"Dest",&dest_TV);   	if(node_address == dest_TV)   	{   !		if(op_ev_valid(wait_ACK_event))   		{    			op_ev_cancel(wait_ACK_event);   			   <			//Data has been sent correctly, remove it from temp_queue   ?			op_pk_destroy(op_subq_pk_remove(data_queue, OPC_QPOS_HEAD));   4			//recieved ACK correctly, go to sleep immediately   A			op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_SECOND_CODE);   			   ;			printf("Node:%d, Grade:%d, time:%f, in second period.\n\   "					Successfully received ACK.\n\   "					Go to sleep immediately.\n",\   '					node_address,grade,op_sim_time());   		}   	}   }       op_pk_destroy(pk_TV);   
                     
   џџџџ   
          pr_state        Ђ  v          
   	send data   
       
      //send DATA   if(pk_TV!=NULL)   {   	op_pk_destroy(pk_TV);   }       //obtain DATA from data_queue   Apk_TV = op_pk_copy(op_subq_pk_access(data_queue, OPC_QPOS_HEAD));   gop_pk_creation_time_set (pk_TV,op_pk_creation_time_get (op_subq_pk_access(data_queue, OPC_QPOS_HEAD)));   	   1op_pk_nfd_set(pk_TV,"Previous Hop",node_address);   +op_pk_nfd_set(pk_TV,"Next Hop",next_hop_2);       op_pk_send(pk_TV,SEND_STRM);       //time statistic   $all_tx_time = all_tx_time + durDATA;       1//set timer for waiting ACK from lower grade node   time = durDATA + SIFS + durACK;   Vwait_ACK_event = op_intrpt_schedule_self(op_sim_time() + time,SLEEP_FROM_SECOND_CODE);       8printf("Node:%d, Grade:%d, time:%f, in second period.\n\   !		Have sent DATA, waiting ACK.\n\   0		If no ACK, after %f seconds, go to sleep.\n",\   )		node_address,grade,op_sim_time(),time);   
                     
   џџџџ   
          pr_state        В   Z          
   RCV(1)   
       
   g   if(pk_TV!=NULL)   {   	op_pk_destroy(pk_TV);   }       pk_TV = op_pk_get(RCV_STRM);   %op_pk_nfd_get(pk_TV,"Type",&pk_type);       if(pk_type == rts_pk)   {   	//time statistic   $	all_rx_time = all_rx_time + durRTS;       	//wait for RTS   (	op_pk_nfd_get(pk_TV,"Grade",&grade_TV);   	if(grade_TV == grade+1)   	{   @		if(op_ev_valid(wait_RTS_event))//the first time to receive RTS   		{    			op_ev_cancel(wait_RTS_event);   *			op_pk_nfd_get(pk_TV,"Src",&next_hop_1);   			   			//prepare to send CTS   %			time = op_dist_uniform(CW) + DIFS;   N			send_CTS_event = op_intrpt_schedule_self(op_sim_time()+time,SEND_CTS_CODE);   			   :			printf("Node:%d, Grade:%d, time:%f, in first period.\n\   "					Successfully received RTS.\n\   !				    Waiting to send CTS.\n",\   '					node_address,grade,op_sim_time());   P			//sprintf(message,"Contend to send CTS, op_dist_uniform(CW)=%f\n",time-DIFS);    			//op_sim_message("",message);   		}   	}   	op_pk_destroy(pk_TV);   }   else   if(pk_type == cts_pk)   {   	//time statistic   $	all_rx_time = all_rx_time + durCTS;   	   B	//CTS listening during contending to send CTS("uniform(CW)+DIFS")    	if(op_ev_valid(send_CTS_event))   	{   		op_ev_cancel(send_CTS_event);   ?		op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_FIRST_CODE);   		   9		printf("Node:%d, Grade:%d, time:%f, in first period.\n\   B				Failure to send CTS, because received CTS from other nodes.\n\   !				Go to sleep immediately.\n",\   &				node_address,grade,op_sim_time());   	}   	op_pk_destroy(pk_TV);   }   else   if(pk_type == data_pk)   {   	//time statistic   %	all_rx_time = all_rx_time + durDATA;   	   *	op_pk_nfd_get(pk_TV,"Next Hop",&dest_TV);   	if(dest_TV == node_address)   	{   "		if(op_ev_valid(wait_DATA_event))   		{   !			op_ev_cancel(wait_DATA_event);   3			op_pk_nfd_get(pk_TV,"Previous Hop",&next_hop_1);   			   /			op_pk_nfd_get(pk_TV,"Hop Num", &hop_num_TV);   			hop_num_TV++;   -			op_pk_nfd_set(pk_TV,"Hop Num",hop_num_TV);   			   +			//insert the DATA packet into data_queue   6			op_subq_pk_insert (data_queue,pk_TV,OPC_QPOS_TAIL);   			   			//wait SIFS time to send ACK   			time = SIFS;   =			op_intrpt_schedule_self(op_sim_time()+time,SEND_ACK_CODE);   			   :			printf("Node:%d, Grade:%d, time:%f, in first period.\n\   #					Successfully received DATA.\n\   					Waiting to reply ACK.\n",\   '					node_address,grade,op_sim_time());   		}else   		{   			op_pk_destroy(pk_TV);   		}   	}else   	{   		op_pk_destroy(pk_TV);   	}   }   else   //if(pk_type != data_pk)   {	   8	printf("Node:%d, Grade:%d, time:%f, in first period.\n\   C			The received pk is not RTS, CTS, or DATA. The pk type is: %d.\n\   			Destroy this pk.\n",\   -			node_address,grade,op_sim_time(),pk_type);   		   	op_pk_destroy(pk_TV);   }	   
                     
   џџџџ   
          pr_state        *   Z          
   	wait DATA   
       
      
//send CTS   if(pk_TV!=NULL)   {   	op_pk_destroy(pk_TV);   }       'pk_TV = op_pk_create_fmt("MAC_CTS_PK");   $op_pk_nfd_set(pk_TV,"Type", cts_pk);   (op_pk_nfd_set(pk_TV,"Src",node_address);   'op_pk_nfd_set(pk_TV,"Dest",next_hop_1);   #op_pk_nfd_set(pk_TV,"Grade",grade);       op_pk_send(pk_TV, SEND_STRM);       //time statistic   #all_tx_time = all_tx_time + durCTS;       2//set timer for waiting DATA from upper grade node   time = durCTS + SIFS +durDATA;   Vwait_DATA_event = op_intrpt_schedule_self(op_sim_time() + time,SLEEP_FROM_FIRST_CODE);       7printf("Node:%d, Grade:%d, time:%f, in first period.\n\   		Have sent CTS.\n\   		Wating to receive Data.\n\   2		If no data, after %f secondes, go to sleep.\n",\   )		node_address,grade,op_sim_time(),time);   
                     
   џџџџ   
          pr_state        Ђ             
   send ACK   
       
      
//send ACK   if(pk_TV!=NULL)   {   	op_pk_destroy(pk_TV);   }       'pk_TV = op_pk_create_fmt("MAC_ACK_PK");   #op_pk_nfd_set(pk_TV,"Type",ack_pk);   (op_pk_nfd_set(pk_TV,"Src",node_address);   'op_pk_nfd_set(pk_TV,"Dest",next_hop_1);   #op_pk_nfd_set(pk_TV,"Grade",grade);       op_pk_send(pk_TV,SEND_STRM);       //time statistic   #all_tx_time = all_tx_time + durACK;       Fop_intrpt_schedule_self(op_sim_time() + durACK,SLEEP_FROM_FIRST_CODE);       7printf("Node:%d, Grade:%d, time:%f, in first period.\n\   		Have replied ACK.\n\   /		Go to sleep after finishing sending ACK.\n",\   $		node_address,grade,op_sim_time());   
                     
   џџџџ   
          pr_state        Ђ            
   carrier sense(1)   
       
      ^printf("Node:%d, time:%f. In first period.\nНјШы statwire жаЖЯ\n",node_address,op_sim_time());   if(op_ev_valid(send_CTS_event))   {   	op_ev_cancel(send_CTS_event);   >	op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_FIRST_CODE);   R	printf("Channel is busy, cancel \"send_CTS_event\", go to sleep immediately.\n");   }		   
                     
   џџџџ   
          pr_state        Ђ  ў          
   carrier sense(2)   
       
   	   Kprintf("Node:%d, time:%f. In second period.\n",node_address,op_sim_time());   printf("НјШы statwire жаЖЯ\n");       if(op_ev_valid(send_RTS_event))   {   	op_ev_cancel(send_RTS_event);   ?	op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_SECOND_CODE);   R	printf("Channel is busy, cancel \"send_RTS_event\", go to sleep immediately.\n");   }   
                     
   џџџџ   
          pr_state          "             л        q    >            
   tr_1   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition               э  й     >     Ђ  '          
   tr_5   
       
   FROM_LOWER && transceiver_state   
       
џџџџ   
       
    џџџџ   
          џџџџ                       pr_transition                 т      Ћ  0  >            
   tr_6   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition               ь  ,     H  x      п          
   tr_7   
       
   SEND_GM   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition              е  D     d      :  )  ;          
   tr_28   
       
   CONTEND_TO_SEND_RTS   
       џџџџ          
    џџџџ   
       
    џџџџ   
                    pr_transition             	  Ф  |     d    $            
   tr_32   
       
   GO_TO_SLEEP   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      "      
  н   У     c  {  К   б  +   б          
   tr_34   
       
   WAKING_TO_WAIT_RTS   
       џџџџ          
    џџџџ   
       
    џџџџ   
                    pr_transition      %   	   
  х       =  q    J      ,   ж          
   tr_37   
       
   	WAKING_UP   
       џџџџ          
    џџџџ   
       
    џџџџ   
                    pr_transition      (   	     є  ф     -      Л      (  '          
   tr_40   
       
   WAKING_TO_SEND_RTS   
       џџџџ          
    џџџџ   
       
    џџџџ   
                    pr_transition      8      	    L     м    D            
   tr_56   
       
   SLEEP_FROM_FIRST   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      9   
        №     G   в  у            
   tr_57   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      ;               F  <  ь            
   tr_59   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      <        Р  [     ё  ќ  Ў  Д          
   tr_60   
       
   SEND_RTS   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      =      	    н     ю  љ  A            
   tr_61   
       
   SLEEP_FROM_SECOND   
       
џџџџ   
       
    џџџџ   
       
   џџџџ   
                 
   pr_transition   
   B        !  x       ј  '            
   tr_66   
       
   FROM_LOWER && transceiver_state   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      G          X         џ            
   tr_71   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      H        I  @           {          
   tr_72   
       
   	SEND_DATA   
       џџџџ          
    џџџџ   
       
    џџџџ   
                    pr_transition      I        J  6       o    ў          
   tr_73   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      J        Е        ь   ї  Й   `          
   tr_74   
       
   FROM_LOWER && transceiver_state   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      K        Ч   А     А   g  о   ј          
   tr_75   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      L           Е        §  -   u          
   tr_76   
       
   SEND_CTS   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      M           В     "   l  ѓ   ј          
   tr_77   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      O        N   е                       
   tr_79   
       
   SEND_ACK   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      P        E   в                       
   tr_80   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      W         §  '      Ћ   с  O  l          
   tr_87   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      X        T  П     H    6  К  f  Г  L            
   tr_88   
       
   default   
       џџџџ          
    џџџџ   
       
    џџџџ   
                    pr_transition      Y        к  [     Т    №            
   tr_89   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      Z        ю  G     ш    Ъ  =    =  ђ  "          
   tr_90   
       
   default   
       џџџџ          
    џџџџ   
       
    џџџџ   
                    pr_transition      [   	   	  9  Р     4      З  Z  З  H            
   tr_91   
       
   default   
       џџџџ          
    џџџџ   
       
    џџџџ   
                    pr_transition      \        ђ  Ъ     ю  ь  Ш  г    г  ћ  ь          
   tr_92   
       
   default   
       џџџџ          
    џџџџ   
       
    џџџџ   
                    pr_transition      ]        N         
    	          
   tr_93   
       
   CHECK_CHANNEL   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      ^        D                       
   tr_94   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      _        J  ь       ё    ѓ          
   tr_95   
       
   CHECK_CHANNEL   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      `        E  ќ       џ    њ          
   tr_96   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition          a                              
2010-05-18       Fusion of Routing and Mac        