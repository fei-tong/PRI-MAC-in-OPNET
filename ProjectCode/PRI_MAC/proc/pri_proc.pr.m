MIL_3_Tfile_Hdr_ 145A 140A modeler 9 51C47AD3 52F3CBBF 102 wpd FeiTong 0 0 none none 0 0 none 6EBBCD91 E32F 0 0 0 0 0 0 1e80 8                                                                                                                                                                                                                                                                                                                                                                                                  ЋЭg      @  	  	  
с  
х  @J  пФ  пШ  р  рш  рє  с'  с+  @>      Send GM Timer   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ             Start Schedule Timer   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ             Sleep Factor    џџџџџџџ    џџџџ   	      џџџџ         џџџџ          џџџџ         2      џџџџ      5      џџџџ      8      џџџџ      11      џџџџ      14      џџџџ      17      џџџџ         Must larger than 1.   GTo keep the same duty cycle as S-MAC(5%), Sleep Factor should be set 38ЅZ                Must       be       larger       than       1.   CW   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ                
Contention       Window   durRTS   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ                duration       for       sending       RTS   durCTS   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ                duration       for       sending       CTS   durDATA   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ                duration       for       sending       DATA   durACK   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ                duration       for       sending       ACK   DIFS   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ             SIFS   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ             Start Grade Timer   џџџџџџџ   џџџџ               џџџџ              џџџџ              џџџџ           ЅZ             Debug   џџџџџџџ   џџџџ           џџџџ          џџџџ          џџџџ           ЅZ             	Retx File   џџџџџџџ   џџџџ       џџџџ      џџџџ      џџџџ           ЅZ             Sink Num    џџџџџџџ    џџџџ           џџџџ          џџџџ          џџџџ           ЅZ             
one/two CW    џџџџџџџ    џџџџ            two CW          џџџџ          џџџџ         one CW      џџџџ      two CW      џџџџ       ЅZ             grade    џџџџџџџ    џџџџ           џџџџ          џџџџ          џџџџ           ЅZ                    begsim intrpt         
   џџџџ   
   doc file            	nd_module      endsim intrpt         
   џџџџ   
   failure intrpts            disabled      intrpt interval         дВI­%У}џџџџ      priority              џџџџ      recovery intrpts            disabled      super priority             џџџџ          p   Objid	\process_id;       Objid	\node_id;       int	\node_address;       int	\grade;       double	\send_gm_timer;       double	\start_schedule_timer;       int	\sleep_factor;       Evhandle	\send_gm_event;       /* Contention Window */   double	\CW;       double	\DIFS;       double	\SIFS;       double	\durRTS;       double	\durCTS;       double	\durDATA;       double	\durACK;       double	\durSleep;       double	\durActive_half;       Evhandle	\wait_RTS_event;       Boolean	\transceiver_state;       Objid	\rx_id;       double	\waking_time;       double	\second_contending_time;       Evhandle	\wait_CTS_event;       Evhandle	\wait_ACK_event;       int	\next_hop_1;       int	\next_hop_2;       Evhandle	\wait_DATA_event;       double	\record_time;       int	\node_type;       double	\start_grade_timer;       double	\all_sleeped_time;       double	\all_active_time;       double	\all_tx_time;       double	\all_rx_time;       Objid	\tx_id;       Objid	\tx_channel_objid;       double	\data_rate;       Boolean	\debug;       List *	\data_id_list;       int	\one_two_cw;       List *	\routing_table_list;       double	\queue_length;       Objid	\queue_id;       Objid	\subq_comp_attr_id;       Objid	\sub_queue_id;       Stathandle	\QLength_handle;       Stathandle	\avg_dc_handle;       PriT_Mac_Flags*	\mac_flags;       double	\CW_counter;       #/* the time duration of one slot */   double	\slot_time;       //* the event handle when decrease CW_counter */   Evhandle	\decrease_CW_event;       >/* for each number of packets in the queue,                 */   >/* record how many times this specific number of packets    */   >/* appearing in the queue, for calculting the parobability. */   List *	\queue_stat_list;       Stathandle	\QStatus_handle;          Packet* pk_TV=NULL;   int pk_type;   double time;   int dest_TV;   int grade_TV;   int hop_num_TV;   int pk_size;       //for "queue_stat_list"   int list_i,*appear_num;   //File   	FILE *in;   char temp_file_name[300];   //char message[100];   int data_id;           DataID * id_TV;   g   //Define node type   #define sink 	1   #define sensor 	2       //Define packet type   #define grade_pk  1   #define rts_pk    2   #define cts_pk    3   #define ack_pk    4   #define data_pk   5       //Define queue type   #define grade_queue		0   #define data_queue		1       //Define stream in-out NO.   #define SRC_STRM 		1   #define RCV_STRM 		0   #define SEND_STRM 		0   #define DISCARD_STRM 	1       #define INFINITY 1.0E100       //Define node state   /*   #define initial			0   #define waking			1   &#define awake			2//go to sending state   #define sleeping		3   #define asleep			4   */       5//Define self-interrupt code and transition condition    #define START_GRADE_CODE				1000   #define SEND_GM_CODE					6000   ##define START_SCHEDULE_CODE				7000    #define TO_WAKE_UP_CODE					8000   &#define WAKING_TO_SEND_RTS_CODE			9000   #define SEND_RTS_CODE					10000    #define SEND_DATA_CODE					20000   #define SEND_CTS_CODE					30000   #define SEND_ACK_CODE					40000   '#define SLEEP_FROM_SECOND_CODE 			50000   %#define SLEEP_FROM_FIRST_CODE			60000   !#define DECREASE_CW_CODE				70000       B#define END	        		    	(op_intrpt_type() == OPC_INTRPT_ENDSIM)   `#define FROM_LOWER					((op_intrpt_type() == OPC_INTRPT_STRM) && (op_intrpt_strm() == RCV_STRM))   `#define FROM_UPPER					((op_intrpt_type() == OPC_INTRPT_STRM) && (op_intrpt_strm() == SRC_STRM))   i#define START_GRADE					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == START_GRADE_CODE))   n#define SEND_GM                 	((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SEND_GM_CODE))       n#define START_SCHEDULE				((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == START_SCHEDULE_CODE))   V#define WAKING_TO_WAIT_RTS			(START_SCHEDULE && grade>=0 && grade%(sleep_factor+2)==0)   W#define CONTEND_TO_SEND_RTS			(START_SCHEDULE && grade>=0 && grade%(sleep_factor+2)==1)   Q#define GO_TO_SLEEP					(START_SCHEDULE && grade>=0 && grade%(sleep_factor+2)>=2)       f#define WAKING_UP					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == TO_WAKE_UP_CODE))   u#define WAKING_TO_SEND_RTS			((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == WAKING_TO_SEND_RTS_CODE))   c#define SEND_RTS					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SEND_RTS_CODE))   e#define SEND_DATA					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SEND_DATA_CODE))   c#define SEND_CTS					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SEND_CTS_CODE))   c#define SEND_ACK					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SEND_ACK_CODE))   s#define SLEEP_FROM_SECOND			((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SLEEP_FROM_SECOND_CODE))   q#define SLEEP_FROM_FIRST			((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SLEEP_FROM_FIRST_CODE))   W#define CHECK_CHANNEL				((op_intrpt_type() == OPC_INTRPT_STAT) && op_intrpt_stat()==0)   i#define DECREASE_CW					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == DECREASE_CW_CODE))       typedef struct   {   	int rt_next_hop;   	int rt_grade;   }RoutingTable;           typedef struct PriT_mac_Flags   {   N	Boolean queue_full; //the queue is full or not, check every start of T state.   :	Boolean queue_inf; //true if the queue length is infinity   I	Boolean busy_before_rts;//the channel is sensed busy before sending RTS.   J	Boolean busy_before_cts;//the channel is sensed busy before replying CTS.   }PriT_Mac_Flags;           typedef struct   {   	int st_data_id;   }DataID;       //function prototype   %static Boolean data_id_exist(int id);   'static void grade_pk_proc(Packet * pk);   %static void upper_data_pk_proc(void);   static void power_stat(void);   static void record_grade(void);   *static void update_routing_table(int,int);   "static int rt_pos_find_next(void);       *int retx=0; //the number of retransmission       $double avg_energy_consumption = 0.0;   double avg_duty_cycle=0.0;   int data_nums_1=0;         =static void update_routing_table(int node_hop,int node_grade)   {   	RoutingTable *rt;   8	FIN(update_routing_table(int node_hop,int node_grade));   	   =	rt = (RoutingTable *)op_prg_mem_alloc(sizeof(RoutingTable));   	   	rt->rt_next_hop = node_hop;   	rt->rt_grade = node_grade;   <	op_prg_list_insert(routing_table_list,rt,OPC_LISTPOS_TAIL);   	   	FOUT;   }       //Deal with grade pk   static void   grade_pk_proc(Packet * pk)   {   //var   +	int pre_hop, grade_in_pk;//,sink_id_in_pk;   //in   	FIN(grade_pk_proc(pk));   //body   (	op_pk_nfd_get(pk,"Grade",&grade_in_pk);   +	op_pk_nfd_get(pk,"Previous Hop",&pre_hop);       .	//op_pk_nfd_get(pk,"Sink ID",&sink_id_in_pk);   	   	if(grade<0)   	{   		grade = grade_in_pk;   0		op_ima_obj_attr_set(process_id,"grade",grade);   		//sink_id = sink_id_in_pk;   		   .		update_routing_table(pre_hop,grade_in_pk-1);   		   		++grade_in_pk;   (		op_pk_nfd_set(pk,"Grade",grade_in_pk);   0		op_pk_nfd_set(pk,"Previous Hop",node_address);   		   (		//cancel the previous event if pending    		if(op_ev_valid(send_gm_event))   		{   			op_ev_cancel(send_gm_event);   		}   '		//at the same time, clear grade_queue   -		if(op_subq_empty(grade_queue) == OPC_FALSE)   		{   			op_subq_flush(grade_queue);   		}   		   3		op_subq_pk_insert (grade_queue,pk,OPC_QPOS_TAIL);   l		send_gm_event = op_intrpt_schedule_self(op_sim_time() + op_dist_exponential(send_gm_timer), SEND_GM_CODE);   		   		FOUT;   	}   	   	if(grade_in_pk < grade)   	{   		grade = grade_in_pk;   0		op_ima_obj_attr_set(process_id,"grade",grade);    		//if(sink_id != sink_id_in_pk)   		//{   		//	sink_id = sink_id_in_pk;   		//}   '		op_prg_list_free(routing_table_list);   .		update_routing_table(pre_hop,grade_in_pk-1);   			   		++grade_in_pk;   (		op_pk_nfd_set(pk,"Grade",grade_in_pk);   0		op_pk_nfd_set(pk,"Previous Hop",node_address);   		   (		//cancel the previous event if pending    		if(op_ev_valid(send_gm_event))   		{   			op_ev_cancel(send_gm_event);   		}   '		//at the same time, clear grade_queue   -		if(op_subq_empty(grade_queue) == OPC_FALSE)   		{   			op_subq_flush(grade_queue);   		}   		   3		op_subq_pk_insert (grade_queue,pk,OPC_QPOS_TAIL);   o	    send_gm_event = op_intrpt_schedule_self(op_sim_time() + op_dist_exponential(send_gm_timer), SEND_GM_CODE);   		   		FOUT;   	}   	   	if(grade_in_pk == grade)   	{   0		update_routing_table(pre_hop,grade_in_pk-1);		   	}   	   	op_pk_destroy(pk);   	   //out   	FOUT;   }        //Received DATA from upper layer   static void    upper_data_pk_proc(void)   {   //var   	Packet* upper_pk;   //in   	FIN(upper_data_pk_proc());   //body    	upper_pk = op_pk_get(SRC_STRM);   /*   %	if(mac_flags->queue_full==OPC_TRUE){   		op_pk_destroy(upper_pk);   E		op_sim_message("queue is full, upper layer packet is dropped!","");   		if(debug)   K			printf("The data subqueue is full, the upper layer packet is dropped.");   		}else{		   */   )		op_pk_nfd_set(upper_pk,"Type",data_pk);   -		op_pk_nfd_set(upper_pk,"Src",node_address);   (		op_pk_nfd_set(upper_pk,"Grade",grade);   	   8		op_subq_pk_insert (data_queue,upper_pk,OPC_QPOS_TAIL);   	   L	//op_stat_write(QLength_handle, op_subq_stat(data_queue,OPC_QSTAT_PKSIZE));   		if(debug)   M			printf("Have inserted the received DATA from \"gsrc\" into DATA queue\n");   //	}   //out   	FOUT;   }       )//In "end" state, proceed power statistic   static void   power_stat(void)   {   //var   
	FILE *in;   	char temp_file_name[300];   	int nodes_num,sink_num;   //in   	FIN(power_stat(void));   //vody   	   A	op_ima_obj_attr_get(node_id,"Power Record File",temp_file_name);   )	if(strcmp(temp_file_name,"disabled")!=0)   	{	   $		//op_sim_message("power stat","");   		if(node_type == sensor){   			avg_energy_consumption += all_sleeped_time*0.05+(all_active_time-(all_tx_time+all_rx_time))*0.45+(all_tx_time+all_rx_time)*0.5;   H			avg_duty_cycle += all_active_time/(all_sleeped_time+all_active_time);   		}   7		nodes_num = op_topo_object_count (OPC_OBJTYPE_NDMOB);   8		op_ima_obj_attr_get(process_id, "Sink Num",&sink_num);   )		if(node_address == nodes_num-sink_num){   c			op_stat_write_t(avg_dc_handle,avg_duty_cycle/(nodes_num-sink_num),(double)(nodes_num-sink_num));   $			//op_stat_write(avg_dc_handle,0);   			   #			in = fopen(temp_file_name,"at");   	   ы			//fprintf(in,"%d %f %f %f\r\n",node_address,all_sleeped_time*0.05+(all_active_time-(all_tx_time+all_rx_time))*0.45+(all_tx_time+all_rx_time)*0.5,all_active_time/(all_sleeped_time+all_active_time),(all_sleeped_time+all_active_time));   			   		   О			//fprintf(in,"%d %f %f %d\r\n",node_address,avg_energy_consumption/((nodes_num-sink_num)*(all_sleeped_time+all_active_time)),(avg_duty_cycle/(nodes_num-sink_num))*100,nodes_num-sink_num);   >			fprintf(in,"%f\r\n",(avg_duty_cycle/(nodes_num-sink_num)));   		   			fclose(in);   		}   	}	   //out   	FOUT;   }       static void record_grade(void)   {   //var   	FILE *file_in;   	char file_name[300];   //in   	FIN(record_grade(void));   //body   <	op_ima_obj_attr_get(node_id,"Grade Record File",file_name);   	   !	file_in = fopen(file_name,"at");   	fprintf(file_in,"%d	%d\r\n",\   		node_address,grade);   	fclose(file_in);   	   *	if(node_type==sink && node_address == -1)   	{   8		op_ima_obj_attr_get(process_id,"Retx File",file_name);   "		file_in = fopen(file_name,"at");   "		fprintf(file_in,"%d	%d	%f\r\n",\   5		retx,data_nums_1,(double)retx/(double)data_nums_1);   		fclose(file_in);   	}   //out   	FOUT;   }       $static Boolean data_id_exist(int id)   {   //var   	int i,list_size;   	DataID* ID;   	Boolean flag=OPC_FALSE;   //in   	FIN(data_id_exist(int id));   //body   *	list_size=op_prg_list_size(data_id_list);   	for(i=0;i<list_size;i++){   2		ID=(DataID *)op_prg_list_access(data_id_list,i);   		if(ID->st_data_id==id){   			flag=OPC_TRUE;   				break;   		}   	}   //out   	FRET(flag);   }       static int rt_pos_find_next()   {   	RoutingTable* rt;   	int i,rt_size;   	       FIN(rt_find_next());   	   0	rt_size = op_prg_list_size(routing_table_list);   	if(rt_size>0)   	{   ?		i = op_dist_outcome(op_dist_load("uniform_int",0,rt_size-1));   0		rt = op_prg_list_access(routing_table_list,i);   		FRET(rt->rt_next_hop);   	}   E	FRET(0); //"0" can not be used as the node address---reserved number   }       static void queue_stat()   {   //var   	int list_size;   	int list_i,*list_element;   	double sum=0.0;   	FILE *file_in;   	char file_name[300];   //in   	FIN(queue_stat());   //body   6	if(mac_flags->queue_inf==OPC_TRUE || node_type==sink)   		FOUT;   	   /	list_size = op_prg_list_size(queue_stat_list);   )	for(list_i=0;list_i<list_size;list_i++){   <		list_element = op_prg_list_access(queue_stat_list,list_i);   		sum=sum + (*list_element);   	}   	   <	op_ima_obj_attr_get(node_id,"Grade Record File",file_name);   !	file_in = fopen(file_name,"at");   	fprintf(file_in,"node %d:\n",\   		node_address);	   	   )	for(list_i=0;list_i<list_size;list_i++){   <		list_element = op_prg_list_access(queue_stat_list,list_i);   7		op_stat_write_t(QStatus_handle,*list_element,list_i);   8		fprintf(file_in,"%d	%f\n",list_i,(*list_element)/sum);   L		if(debug) printf("packet #: %d, appear times:%d.\n",list_i,*list_element);   	}   	fclose(file_in);   //out   	FOUT;   }                                          в  :          
   init   
       J      // Obtain related ID   process_id = op_id_self();   &node_id = op_topo_parent(process_id);   7rx_id = op_id_from_name(node_id,OPC_OBJTYPE_RARX,"rx");   mtx_id = op_id_from_name(node_id,OPC_OBJTYPE_RATX,"tx");//the name of receiver radio in node layer called "tx"           $//obtain tx channel of compound type   ?op_ima_obj_attr_get_objid (tx_id, "channel",&tx_channel_objid);       Ktx_channel_objid = op_topo_child (tx_channel_objid, OPC_OBJTYPE_RATXCH, 0);       0op_ima_obj_attr_get(process_id, "Debug",&debug);       =op_ima_obj_attr_get(tx_channel_objid,"data rate",&data_rate);       //debug =OPC_TRUE;       //obtain the queue length   6queue_id = op_topo_child(node_id,OPC_OBJTYPE_QUEUE,0);   ?subq_comp_attr_id = op_topo_child(queue_id,OPC_OBJTYPE_COMP,0);   Csub_queue_id = op_topo_child(subq_comp_attr_id,OPC_OBJTYPE_SUBQ,1);   //queue_length's type is double   >op_ima_obj_attr_get(sub_queue_id,"pk capacity",&queue_length);   if (debug) {   	printf("queue length:\n");   :	printf("The maximum queue length is %f.\n",queue_length);   }               	if(debug)   $	printf("data_rate=%f\n",data_rate);       (pk_TV = op_pk_create_fmt("MAC_DATA_PK");   $pk_size=op_pk_total_size_get(pk_TV);   durDATA=(pk_size)/data_rate;   op_pk_destroy(pk_TV);   	if(debug)    	printf("durDATA=%f\n",durDATA);       'pk_TV = op_pk_create_fmt("MAC_RTS_PK");   $pk_size=op_pk_total_size_get(pk_TV);   durRTS=(pk_size)/data_rate;   op_pk_destroy(pk_TV);   	if(debug)   	printf("durRTS=%f\n",durRTS);       'pk_TV = op_pk_create_fmt("MAC_CTS_PK");   $pk_size=op_pk_total_size_get(pk_TV);   durCTS=(pk_size)/data_rate;   op_pk_destroy(pk_TV);   	if(debug)   	printf("durCTS=%f\n",durCTS);       'pk_TV = op_pk_create_fmt("MAC_ACK_PK");   $pk_size=op_pk_total_size_get(pk_TV);   durACK=(pk_size)/data_rate;   op_pk_destroy(pk_TV);   	if(debug)   	printf("durACK=%f\n",durACK);       //obtain parameter   Nop_ima_obj_attr_get(process_id, "Start Grade Timer", &start_grade_timer);		//1   Hop_ima_obj_attr_get(process_id, "Send GM Timer", &send_gm_timer);				//2   Sop_ima_obj_attr_get(process_id, "Start Schedule Timer", &start_schedule_timer);	//3   Gop_ima_obj_attr_get(process_id, "Sleep Factor", &sleep_factor);					//4   7op_ima_obj_attr_get(process_id, "CW",&CW);										//5   ?//op_ima_obj_attr_get(process_id, "durRTS",&durRTS);								//6   ?//op_ima_obj_attr_get(process_id, "durCTS",&durCTS);								//7   @//op_ima_obj_attr_get(process_id, "durDATA",&durDATA);							//8   ?//op_ima_obj_attr_get(process_id, "durACK",&durACK);								//9   ;op_ima_obj_attr_get(process_id, "DIFS",&DIFS);									//10   ;op_ima_obj_attr_get(process_id, "SIFS",&SIFS);									//11   :op_ima_obj_attr_get(process_id,"one/two CW", &one_two_cw);           7op_ima_obj_attr_get(node_id, "user id", &node_address);   5op_ima_obj_attr_get(node_id, "Node Type",&node_type);       @//op_ima_obj_attr_get(process_id, "Communication Range",&range);   <//op_ima_obj_attr_set(node_id, "Communication Range",range);       8op_ima_obj_attr_get(rx_id, "state", &transceiver_state);       (routing_table_list=op_prg_list_create();       grade = -1;   .op_ima_obj_attr_set(process_id,"grade",grade);   //sink_id = -1;       all_sleeped_time = 0;   all_active_time = 0;   all_tx_time = 0;   all_rx_time = 0;   Nslot_time = 0.001; //the time duration of one slot is 0.001 seconds, i.e., 1ms       "data_id_list=op_prg_list_create();       Hmac_flags=(PriT_Mac_Flags *) op_prg_mem_alloc (sizeof (PriT_Mac_Flags));   /*   <if(op_subq_stat(data_queue,OPC_QSTAT_PKSIZE)==queue_length){    	mac_flags->queue_full=OPC_TRUE;   }else{   !	mac_flags->queue_full=OPC_FALSE;   }*/   -//Initialization of the used flags: mac_flags    mac_flags->queue_full=OPC_FALSE;   %mac_flags->busy_before_rts=OPC_FALSE;   %mac_flags->busy_before_cts=OPC_FALSE;   mac_flags->queue_inf=OPC_FALSE;       if(queue_length==INFINITY){   	mac_flags->queue_inf=OPC_TRUE;   (	if(debug) printf("it's infinity!!!\n");   }else{   ,	if(debug) printf("it's not infinity!!!\n");    	mac_flags->queue_inf=OPC_FALSE;   (	queue_stat_list = op_prg_list_create();   -	for(list_i=0;list_i<=queue_length;list_i++){   1		appear_num=(int*)op_prg_mem_alloc(sizeof(int));   		*appear_num=0;   B		op_prg_list_insert(queue_stat_list,appear_num,OPC_LISTPOS_TAIL);   	}   }       //data_nums=0;       M//durActive contains two parts: durReceive & durSedn, and durReceive==durSend   if(one_two_cw == 2){   @	durActive_half = 2*CW+durRTS+durCTS+durDATA+durACK+DIFS+3*SIFS;   }else if(one_two_cw == 1){   @	durActive_half = 2*CW+durRTS+durCTS+durDATA+durACK+DIFS+3*SIFS;   }   	if(debug)   Z	printf("durActive_half=%f, T_cycle=%f\n",durActive_half,(sleep_factor+2)*durActive_half);       )durSleep = sleep_factor * durActive_half;   if(node_type == sink)   {   M	op_intrpt_schedule_self(op_sim_time() + start_grade_timer,START_GRADE_CODE);   }	       Sop_intrpt_schedule_self(op_sim_time() + start_schedule_timer, START_SCHEDULE_CODE);       //statistics regester   RQLength_handle = op_stat_reg("Queue Length", OPC_STAT_INDEX_NONE, OPC_STAT_LOCAL);   Xavg_dc_handle = op_stat_reg("Average Duty Cycle", OPC_STAT_INDEX_NONE, OPC_STAT_GLOBAL);   QQStatus_handle = op_stat_reg("Queue Status",OPC_STAT_INDEX_NONE, OPC_STAT_LOCAL);       <//op_ima_obj_attr_get (process_id, "subqueue", &subq_objid);   A//num_subqs = op_topo_child_count (subq_objid, OPC_OBJTYPE_SUBQ);   &//printf("згЖгСаИіЪ§:%d\n",num_subqs);   J       
      /*   @op_ima_obj_attr_get(node_id,"Grade Record File",temp_file_name);   remove(temp_file_name);   7op_ima_obj_attr_get(node_id,"Log File",temp_file_name);   remove(temp_file_name);   */   if(node_type == sink)   {   8	op_ima_obj_attr_get(node_id,"Log File",temp_file_name);   !	in = fopen(temp_file_name,"at");   	   l	fprintf(in,"Begin:\r\ndurActive_half: %f, durSleep: %f. cycle time: (%d+2)*%f=%f.(in \"gmac->init\")\r\n",\   W		durActive_half,durSleep,sleep_factor,durActive_half,(sleep_factor+2)*durActive_half);   "	fprintf(in,"duty cycle:%f.\r\n",\   1			durActive_half*2/(durActive_half*2+durSleep));   	fclose(in);   }   /*   'if(strcmp(temp_file_name,"disable")!=0)   {	   5	printf("Node:%d, ДЫНкЕуПЩВњЩњМЧТМ.\n",node_address);   !	in = fopen(temp_file_name,"at");   ;	fprintf(in,"Simulation_time		Average_power_consumed\r\n");   	fclose(in);   }   */   
       
   џџџџ   
          pr_state                    
   idle   
       
      if(END)   {   /*   A	op_ima_obj_attr_get(node_id,"Grade Record File",temp_file_name);   	   !	in = fopen(temp_file_name,"at");   *	fprintf(in,"НкЕуЃК%d, ЦфМЖБ№ЮЊЃК%d\r\n",\   		node_address,grade);   	fclose(in);   */   	record_grade();   	   !	op_prg_list_free (data_id_list);    	op_prg_mem_free (data_id_list);       '	op_prg_list_free (routing_table_list);   &	op_prg_mem_free (routing_table_list);   $	op_prg_list_free (queue_stat_list);   #	op_prg_mem_free (queue_stat_list);   }        //Received DATA from upper layer   if(FROM_UPPER)   {   
	if(debug)   G		printf("In \"idle\" state: received DATA which is from \"gsrc\".\n");   	upper_data_pk_proc();   }   
       
      /*   if(node_type!=sink)   		grade=1;       */   
           џџџџ             pr_state          v          
   GM proc   
       
      pk_TV = op_pk_get(RCV_STRM);   %op_pk_nfd_get(pk_TV,"Type",&pk_type);   if(pk_type == grade_pk)   {   	grade_pk_proc(pk_TV);   }   else   {   	op_pk_destroy(pk_TV);   q	op_sim_end("Waiting Grade Message Err: Are you kidding me?","I'm waiting Grade Message","Not you","ЧызаЯИМьВщ");       }   
                     
   џџџџ   
          pr_state                     
   send gm   
       
   	   +if(op_subq_empty(grade_queue) == OPC_FALSE)   {   7	pk_TV = op_subq_pk_remove(grade_queue, OPC_QPOS_HEAD);   	op_pk_send(pk_TV,SEND_STRM);   }   else   {   G	op_sim_end("Err: grade queue is empty, simulation is over!","","","");   }   
                     
   џџџџ   
          pr_state      	  v            
   sleeping   
       
   q   @if(op_intrpt_code() == START_SCHEDULE_CODE)// from "GO_TO_SLEEP"   {	    	if(grade % (sleep_factor+2)>=2)   	{   @		time = (sleep_factor+2-grade%(sleep_factor+2))*durActive_half;   E		//time = durSleep - ((grade%(sleep_factor+2))-3)*durActive_half;			   	}   	else   	{   H		op_sim_end("ЗТецГіДэ","grade%(sleep_factor+2)ВЛДѓгк3Лђ0","ЧыЗДЫМ","");   	}   	/*   8	op_ima_obj_attr_get(node_id,"Log File",temp_file_name);   !	in = fopen(temp_file_name,"at");   y	fprintf(in,"Node:%d, Grade:%d, Grade%%(%d+2): %d, time:%f, enter into \"sleeping\"state, been \"asleep\" for: %f.\r\n",\   V		node_address,grade,sleep_factor,grade%(sleep_factor+2),op_sim_time(),durSleep-time);   	fclose(in);   	*/   /	//set timer,when wake up, go to "waking" state   @	op_intrpt_schedule_self(op_sim_time() + time, TO_WAKE_UP_CODE);   
	if(debug)   ;		printf("Node:%d, Grade:%d, time:%f,in sleeping period.\n\   			Initial to sleeping.\n\   (			After %f seconds, go to wake up.\n",\   *			node_address,grade,op_sim_time(),time);   	   	//time statistic   	record_time = op_sim_time();   }   else   Fif(op_intrpt_code() == SLEEP_FROM_FIRST_CODE)//sleep from first period   {   *	//time = CW+durCTS+durDATA+durACK+3*SIFS;   5	time = waking_time + durActive_half - op_sim_time();   		   	if (node_type == sensor){   1		//when wake up, go to "second contention" state   I		op_intrpt_schedule_self(op_sim_time() + time, WAKING_TO_SEND_RTS_CODE);   		if(debug)   <			printf("Node:%d, Grade:%d, time:%f,in sleeping period.\n\   )				To sleeping from the first period.\n\   /				After %f seconds, go to second period.\n",\   +				node_address,grade,op_sim_time(),time);   	   		//time statistic   @		all_active_time = all_active_time+(op_sim_time()-record_time);   		record_time = op_sim_time();   	}else if(node_type == sink){   '		//when wake up, go to "waking" state	   A		op_intrpt_schedule_self(op_sim_time() + time, TO_WAKE_UP_CODE);   		   		if(debug)   F			printf("Node:%d, Grade:%d, time:%f,sink node in sleeping period.\n\   				from the first period.\n\   +				After %f seconds, go to wake up.\n\n",\   +				node_address,grade,op_sim_time(),time);   	   		//time statistic   @		all_active_time = all_active_time+(op_sim_time()-record_time);   		record_time = op_sim_time();   	}   }   else   Hif(op_intrpt_code() == SLEEP_FROM_SECOND_CODE)//sleep from second period   {   	   K	time = second_contending_time + durActive_half + durSleep - op_sim_time();   	   %	//when wake up, go to "waking" state   @	op_intrpt_schedule_self(op_sim_time() + time, TO_WAKE_UP_CODE);   
	if(debug)   ;		printf("Node:%d, Grade:%d, time:%f,in sleeping period.\n\   %			To sleeping from second period.\n\   2			After %f seconds, go to \"wakeing\" state.\n",\   *			node_address,grade,op_sim_time(),time);   	   	//time statistic   ?	all_active_time = all_active_time+(op_sim_time()-record_time);   	record_time = op_sim_time();   }        //Received DATA from upper layer   if(FROM_UPPER)   {   
	if(debug)   K		printf("In \"sleeping\" state: received DATA which is from \"gsrc\".\n");   	upper_data_pk_proc();   }       Gif((FROM_LOWER && !transceiver_state)||(FROM_LOWER && node_type==sink))   {	   $	op_pk_destroy(op_pk_get(RCV_STRM));   
	if(debug)   K		printf("Node:%d, time:%f. Node is sleeping, destroy the received pk.\n",\   			node_address,op_sim_time());   }   if(END)   {   C	all_sleeped_time = all_sleeped_time + (op_sim_time()-record_time);   	power_stat();   	//record_grade();   	queue_stat();   	   !	op_prg_list_free (data_id_list);    	op_prg_mem_free (data_id_list);   '	op_prg_list_free (routing_table_list);   &	op_prg_mem_free (routing_table_list);   $	op_prg_list_free (queue_stat_list);   #	op_prg_mem_free (queue_stat_list);   }   //close transceiver   transceiver_state = OPC_FALSE;   7op_ima_obj_attr_set(rx_id, "state", transceiver_state);   
       
       
           џџџџ             pr_state      
  v   в          
   waking   
       
   +   A//The number of packets in the queue at the beginning of R state.   Iop_stat_write(QLength_handle, op_subq_stat(data_queue,OPC_QSTAT_PKSIZE));       //Log record   if(WAKING_TO_WAIT_RTS)   {   	/*   8	op_ima_obj_attr_get(node_id,"Log File",temp_file_name);   !	in = fopen(temp_file_name,"at");   Z	fprintf(in,"Node:%d, Grade:%d, Grade%%4: %d, time:%f, enter into \"waking\" state.\r\n",\   -		node_address,grade,grade%4, op_sim_time());   	fclose(in);   	*/   	record_time = op_sim_time();   }	           //enable transceiver   //if(node_type == sensor){   	transceiver_state = OPC_TRUE;   8	op_ima_obj_attr_set(rx_id, "state", transceiver_state);   //}       waking_time = op_sim_time();       Pif(op_subq_stat(data_queue,OPC_QSTAT_PKSIZE)!=queue_length){ //queue is not full   	time = CW+DIFS+durRTS;   W	wait_RTS_event = op_intrpt_schedule_self(op_sim_time() + time, SLEEP_FROM_FIRST_CODE);   I}else{ //queue is full, cannot receive anything, go to sleep immediately.   E	op_intrpt_schedule_self(op_sim_time() + 0.0, SLEEP_FROM_FIRST_CODE);   }       	if(debug)   U	printf("Node:%d, Grade:%d, time:%f, entered into first period (\"waking\" state).\n\   	    Waiting RTS.\n\   0		If no RTS, after %f seconds, go to sleep.\n",\   )		node_address,grade,op_sim_time(),time);       //time statistic   //if(node_type == sensor){   E	all_sleeped_time = all_sleeped_time + (op_sim_time() - record_time);   	record_time = op_sim_time();   //}   
                     
   џџџџ   
          pr_state        v  :          
   second contention   
       
   V   <//if the maximum queue length is set to be "queue_length+1",   1//you should remove the additional packet packet    *//at the last position of the queue, here.   // add your code here.           =//calculate the number of times a specific number of packets    //appearing in the queue.   &if(mac_flags->queue_inf == OPC_FALSE){   2	list_i=op_subq_stat(data_queue,OPC_QSTAT_PKSIZE);   9	appear_num = op_prg_list_access(queue_stat_list,list_i);   	(*appear_num)++;   S	if(debug) printf("queue_stat_list size: %d.\n",op_prg_list_size(queue_stat_list));   }               /*   <if(op_subq_stat(data_queue,OPC_QSTAT_PKSIZE)==queue_length){    	mac_flags->queue_full=OPC_TRUE;   }else{   !	mac_flags->queue_full=OPC_FALSE;   }   */       //Log record   if(CONTEND_TO_SEND_RTS)   {   	/*   8	op_ima_obj_attr_get(node_id,"Log File",temp_file_name);   !	in = fopen(temp_file_name,"at");   e	fprintf(in,"Node:%d, Grade:%d, Grade%%4: %d, time:%f, enter into \"second contention\" state.\r\n",\   ,		node_address,grade,grade%4,op_sim_time());   	fclose(in);   	*/   	record_time = op_sim_time();   }           /*   1. check data_queue   5   if(Y) open transceiver, contending for sending RTS      if(N) go to sleep   */       //enable transceiver   transceiver_state = OPC_TRUE;   7op_ima_obj_attr_set(rx_id, "state", transceiver_state);           'second_contending_time = op_sim_time();   Cif(op_subq_empty(data_queue) == OPC_FALSE)//data queue is not empty   {   3//	time = op_dist_uniform(CW*1000.0)/1000.0 + DIFS;   [	CW_counter = op_dist_outcome(op_dist_load("uniform_int",0.0,CW*1000.0-1)); // from [0,W-1]   C	if(debug) printf("1. in send rts, CW_counter = %f.\n",CW_counter);   	if(CW_counter == 0.0){   @		op_intrpt_schedule_self(op_sim_time()+DIFS+0.0,SEND_RTS_CODE);   	}else{   ]		decrease_CW_event = op_intrpt_schedule_self(op_sim_time()+DIFS+slot_time,DECREASE_CW_CODE);   		CW_counter--;   	}   	//time = time/1000.0 + DIFS;   E	//if(debug) printf("2. in send rts, CW_counter = %f.\n",CW_counter);   	   
	if(debug)   :		printf("Node:%d, Grade:%d, time:%f, in second period.\n\   6			data_queue is not empty, Contending to send RTS.\n\   			Waiting to send RTS.\n",\   %			node_address,grade,op_sim_time());   N	//sprintf(message,"Contend to send RTS, op_dist_uniform(CW)=%f\n",time-DIFS);   	//op_sim_message("",message);   }   &else//data queue is empty, go to sleep   {   ?	op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_SECOND_CODE);   
	if(debug)   :		printf("Node:%d, Grade:%d, time:%f, in second period.\n\   			data_queue is empty.\n\    			Go to sleep immediately.\n",\   %			node_address,grade,op_sim_time());   }       //time statistic   Ball_sleeped_time = all_sleeped_time + (op_sim_time()-record_time);   record_time = op_sim_time();   
                     
   џџџџ   
          pr_state        ю  В          
   wait CTS   
       
   #   
//send RTS   if(pk_TV!=NULL)   {   	op_pk_destroy(pk_TV);   }   9if(node_type!=sink && (next_hop_2=rt_pos_find_next())==0)   {   Y	op_sim_end("Routing table is empty Err: Are you sure you are not kidding me?","","","");   }       'pk_TV = op_pk_create_fmt("MAC_RTS_PK");   %op_pk_nfd_set(pk_TV, "Type", rts_pk);   )op_pk_nfd_set(pk_TV,"Src", node_address);   #op_pk_nfd_set(pk_TV,"Grade",grade);   )op_pk_nfd_set(pk_TV, "Dest", next_hop_2);       op_pk_send(pk_TV, SEND_STRM);       //time statistic   #all_tx_time = all_tx_time + durRTS;       2//set timer for waiting CTS from lower grade nodes   if(one_two_cw == 2){   	time = durRTS+CW+SIFS+durCTS;   }else if(one_two_cw == 1){   	time = durRTS+SIFS+durCTS;   }       Vwait_CTS_event = op_intrpt_schedule_self(op_sim_time() + time,SLEEP_FROM_SECOND_CODE);   	if(debug)   9	printf("Node:%d, Grade:%d, time:%f, in second period.\n\   		Have sent RTS.\n\   		Waiting to receive CTS.\n\   0		If no CTS, after %f seconds, go to sleep.\n",\   )		node_address,grade,op_sim_time(),time);   
                     
   џџџџ   
          pr_state        *            
   first   
       
   *    //Received DATA from upper layer   if(FROM_UPPER)   {   
	if(debug)   H		printf("In \"first\" state: received DATA which is from \"gsrc\".\n");   	upper_data_pk_proc();   }       if(END)   {       ?	all_active_time = all_active_time+(op_sim_time()-record_time);   	power_stat();   	//record_grade();   	queue_stat();   	   !	op_prg_list_free (data_id_list);    	op_prg_mem_free (data_id_list);   '	op_prg_list_free (routing_table_list);   &	op_prg_mem_free (routing_table_list);   $	op_prg_list_free (queue_stat_list);   #	op_prg_mem_free (queue_stat_list);   }       if(DECREASE_CW){   ,	if(mac_flags->busy_before_cts == OPC_TRUE){   K		//The channel is sensed busy, reset the flag and go to sleep immediately.   )		mac_flags->busy_before_cts = OPC_FALSE;   ?		op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_FIRST_CODE);   		if(debug)   <			printf("In \"first\" state: The channel is sensed busy, \   6				reset the flag and go to sleep immediately.\n\n");   	}else if(CW_counter == 0){   ;		op_intrpt_schedule_self(op_sim_time()+0.0,SEND_CTS_CODE);   		if(debug)   @			printf("In \"second\" state: CW_counter = %f.\n",CW_counter);   	}else{   [		decrease_CW_event = op_intrpt_schedule_self_mt(op_sim_time()+slot_time,DECREASE_CW_CODE);   		CW_counter--;   	}       }   
       
       
           џџџџ             pr_state        *  ў          
   second   
       
   *    //Received DATA from upper layer   if(FROM_UPPER)   {   
	if(debug)   I		printf("In \"second\" state: received DATA which is from \"gsrc\".\n");   	upper_data_pk_proc();   }   if(END)   {   A	all_active_time = all_active_time + (op_sim_time()-record_time);   	power_stat();   	//record_grade();   	queue_stat();   		   !	op_prg_list_free (data_id_list);    	op_prg_mem_free (data_id_list);   '	op_prg_list_free (routing_table_list);   &	op_prg_mem_free (routing_table_list);   	   &	//if(mac_flags->queue_inf==OPC_FALSE)   $	op_prg_list_free (queue_stat_list);   #	op_prg_mem_free (queue_stat_list);   }       if(DECREASE_CW){   ,	if(mac_flags->busy_before_rts == OPC_TRUE){   K		//The channel is sensed busy, reset the flag and go to sleep immediately.   )		mac_flags->busy_before_rts = OPC_FALSE;   @		op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_SECOND_CODE);   		if(debug)   =			printf("In \"second\" state: The channel is sensed busy, \   6				reset the flag and go to sleep immediately.\n\n");   	}else if(CW_counter == 0){   ;		op_intrpt_schedule_self(op_sim_time()+0.0,SEND_RTS_CODE);   		if(debug)   @			printf("In \"second\" state: CW_counter = %f.\n",CW_counter);   	}else{   [		decrease_CW_event = op_intrpt_schedule_self_mt(op_sim_time()+slot_time,DECREASE_CW_CODE);   		CW_counter--;   	}       }   
                         џџџџ             pr_state        f  В          
   RCV(2)   
       
   \   if(pk_TV!=NULL)   {   	op_pk_destroy(pk_TV);   }       pk_TV = op_pk_get(RCV_STRM);       $pk_size=op_pk_total_size_get(pk_TV);   time=(pk_size+10)/data_rate;   //time statistic   #//all_rx_time = all_rx_time + time;   	if(debug)   Ђ	printf("For sending data, Node:%d, Grade:%d, time:%f.\nReceived a packet, size: %d.\nReceive Duration is: %f.\n",	node_address,grade,op_sim_time(),pk_size,time);       %op_pk_nfd_get(pk_TV,"Type",&pk_type);       /*   if(pk_type == rts_pk)   {   	//time statistic   $	all_rx_time = all_rx_time + durRTS;   	   E	//RTS listening during contending to send RTS("uniform(CW)+durDIFS")   #	if(op_ev_valid(decrease_CW_event))   	{   "		op_ev_cancel(decrease_CW_event);   @		op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_SECOND_CODE);   		if(debug)   ;			printf("Node:%d, Grade:%d, time:%f, in second period.\n\   B				Failure to send RTS, because received RTS from other nodes.\n\   !				Go to sleep immediately.\n",\   &				node_address,grade,op_sim_time());   	}   }   */       if(pk_type == cts_pk)   {   	//time statistic   $	all_rx_time = all_rx_time + durCTS;   	   (	op_pk_nfd_get(pk_TV,"Grade",&grade_TV);   &	op_pk_nfd_get(pk_TV,"Dest",&dest_TV);   3	if(grade == grade_TV+1 && dest_TV == node_address)   	{   @		if(op_ev_valid(wait_CTS_event))//the first time to receive CTS   		{    			op_ev_cancel(wait_CTS_event);   *			op_pk_nfd_get(pk_TV,"Src",&next_hop_2);   			    			//wait SIFS time to send DATA   			time = SIFS;   >			op_intrpt_schedule_self(op_sim_time()+time,SEND_DATA_CODE);   			if(debug)   <				printf("Node:%d, Grade:%d, time:%f, in second period.\n\   "					Successfully received CTS.\n\   					Waiting to send DATA.\n",\   '					node_address,grade,op_sim_time());   		}   	}   }       if(pk_type == ack_pk)   {   	//time statistic   $	all_rx_time = all_rx_time + durACK;   	   &	op_pk_nfd_get(pk_TV,"Dest",&dest_TV);   	if(node_address == dest_TV)   	{   !		if(op_ev_valid(wait_ACK_event))   		{    			op_ev_cancel(wait_ACK_event);   			   			   ^			/*Since we don't consider retransmission, the reception of ACK or not becomes meaningless*/   <			//Data has been sent correctly, remove it from temp_queue   A			//op_pk_destroy(op_subq_pk_remove(data_queue, OPC_QPOS_HEAD));   			   
			retx--;   4			//recieved ACK correctly, go to sleep immediately   A			op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_SECOND_CODE);   			if(debug)   <				printf("Node:%d, Grade:%d, time:%f, in second period.\n\   "					Successfully received ACK.\n\   "					Go to sleep immediately.\n",\   '					node_address,grade,op_sim_time());   		}   	}   }       op_pk_destroy(pk_TV);   
                     
   џџџџ   
          pr_state        о  v          
   	send data   
       
   %   //send DATA   if(pk_TV!=NULL)   {   	op_pk_destroy(pk_TV);   }       //obtain DATA from data_queue   C//pk_TV = op_pk_copy(op_subq_pk_access(data_queue, OPC_QPOS_HEAD));       r//sprintf(message,"creation time: %f.\n", op_pk_creation_time_get (op_subq_pk_access(data_queue, OPC_QPOS_HEAD)));   //op_sim_message(message,"1");       U/* since we don't consider consider retransmission, once a node win the contention,*/   A/* and send the data out, this data is removed from the queue. */   5pk_TV = op_subq_pk_remove(data_queue, OPC_QPOS_HEAD);   K//sprintf(message,"creation time: %f.\n", op_pk_creation_time_get (pk_TV));   //op_sim_message(message,"2");       i//op_pk_creation_time_set (pk_TV,op_pk_creation_time_get (op_subq_pk_access(data_queue, OPC_QPOS_HEAD)));   	   1op_pk_nfd_set(pk_TV,"Previous Hop",node_address);   +op_pk_nfd_set(pk_TV,"Next Hop",next_hop_2);       op_pk_send(pk_TV,SEND_STRM);   retx++;       //time statistic   $all_tx_time = all_tx_time + durDATA;       1//set timer for waiting ACK from lower grade node   time = durDATA + SIFS + durACK;   Vwait_ACK_event = op_intrpt_schedule_self(op_sim_time() + time,SLEEP_FROM_SECOND_CODE);   	if(debug)   9	printf("Node:%d, Grade:%d, time:%f, in second period.\n\   !		Have sent DATA, waiting ACK.\n\   0		If no ACK, after %f seconds, go to sleep.\n",\   )		node_address,grade,op_sim_time(),time);   
                     
   џџџџ   
          pr_state        ю   Z          
   RCV(1)   
       
   Ў   if(pk_TV!=NULL)   {   	op_pk_destroy(pk_TV);   }       pk_TV = op_pk_get(RCV_STRM);       $pk_size=op_pk_total_size_get(pk_TV);   time=(pk_size+10)/data_rate;   //time statistic   #//all_rx_time = all_rx_time + time;   	if(debug)   Ј	printf("\nFor receiving data, Node:%d, Grade:%d, time:%f.\nReceived a packet, size: %d.\nReceive Duration is: %f.\n\n",	node_address,grade,op_sim_time(),pk_size,time);       %op_pk_nfd_get(pk_TV,"Type",&pk_type);       7//printf("out: please pay an attention here, ЭЏЗЩ!\n");   +//sprintf(message,"pk_type=%d.\n",pk_type);   //op_sim_message(message,"");       if(pk_type == rts_pk)   {   	//time statistic   $	all_rx_time = all_rx_time + durRTS;       	//wait for RTS   (	op_pk_nfd_get(pk_TV,"Grade",&grade_TV);   &	op_pk_nfd_get(pk_TV,"Dest",&dest_TV);   7	//printf("in: please pay an attention here, ЭЏЗЩ!\n");   	if(grade_TV == grade+1)   	{   @		if(op_ev_valid(wait_RTS_event))//the first time to receive RTS   		{    			op_ev_cancel(wait_RTS_event);   			if(one_two_cw == 2){   +				op_pk_nfd_get(pk_TV,"Src",&next_hop_1);   			   				//prepare to send CTS   6				//time = op_dist_uniform(CW*1000.0)/1000.0 + SIFS;   N				CW_counter = op_dist_outcome(op_dist_load("uniform_int",0.0,CW*1000.0-1));   A				if(debug) printf("in wait rts. CW_counter=%f.\n",CW_counter);   				if(CW_counter == 0.0){   C					op_intrpt_schedule_self(op_sim_time()+SIFS+0.0,SEND_CTS_CODE);   
				}else{   `					decrease_CW_event = op_intrpt_schedule_self(op_sim_time()+SIFS+slot_time,DECREASE_CW_CODE);   					CW_counter--;   				}   				    				//time = time/1000.0 + SIFS;   Q				//send_CTS_event = op_intrpt_schedule_self(op_sim_time()+time,SEND_CTS_CODE);   				if(debug)   <					printf("Node:%d, Grade:%d, time:%f, in first period.\n\   #						Successfully received RTS.\n\   						Waiting to send CTS.\n",\   (						node_address,grade,op_sim_time());   Q				//sprintf(message,"Contend to send CTS, op_dist_uniform(CW)=%f\n",time-DIFS);   !				//op_sim_message("",message);   			}   			else if(one_two_cw == 1){   				if(dest_TV==node_address)   				{   ,					op_pk_nfd_get(pk_TV,"Src",&next_hop_1);   			   					//prepare to send CTS   					time = SIFS;   ?					op_intrpt_schedule_self(op_sim_time()+time,SEND_CTS_CODE);   					if(debug)   =						printf("Node:%d, Grade:%d, time:%f, in first period.\n\   %								Successfully received RTS.\n\   $				    			Waiting to send CTS.\n",\   *								node_address,grade,op_sim_time());   R					//sprintf(message,"Contend to send CTS, op_dist_uniform(CW)=%f\n",time-DIFS);   "					//op_sim_message("",message);   					}else   				{   					if(debug)   =						printf("Node:%d, Grade:%d, time:%f, in first period.\n\   \								The received RTS is not destined to itself. Continue to wait. NAV has been set.\n",\   *								node_address,grade,op_sim_time());   B					op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_FIRST_CODE);   				}   			}   		}   	}   	op_pk_destroy(pk_TV);   }   else   /*   if(pk_type == cts_pk)   {   	//time statistic   $	all_rx_time = all_rx_time + durCTS;   	   B	//CTS listening during contending to send CTS("uniform(CW)+DIFS")   #	if(op_ev_valid(decrease_CW_event))   	{   "		op_ev_cancel(decrease_CW_event);   ?		op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_FIRST_CODE);   		if(debug)   :			printf("Node:%d, Grade:%d, time:%f, in first period.\n\   B				Failure to send CTS, because received CTS from other nodes.\n\   !				Go to sleep immediately.\n",\   &				node_address,grade,op_sim_time());   	}   B	//op_sim_message("the received packet is cts_pk. ","be deleted");   	op_pk_destroy(pk_TV);   }   else    */   if(pk_type == data_pk)   {   	//time statistic   %	all_rx_time = all_rx_time + durDATA;   	   *	op_pk_nfd_get(pk_TV,"Next Hop",&dest_TV);   	if(dest_TV == node_address)   	{   "		if(op_ev_valid(wait_DATA_event))   		{   !			op_ev_cancel(wait_DATA_event);   3			op_pk_nfd_get(pk_TV,"Previous Hop",&next_hop_1);   			   /			op_pk_nfd_get(pk_TV,"Hop Num", &hop_num_TV);   			hop_num_TV++;   -			op_pk_nfd_set(pk_TV,"Hop Num",hop_num_TV);   			   			if(node_type == sink)   			{   ,				op_pk_nfd_get(pk_TV,"Data No",&data_id);   				    				if(!data_id_exist(data_id)){   6					id_TV=(DataID *)op_prg_mem_alloc(sizeof(DataID));   					id_TV->st_data_id=data_id;   =					op_prg_list_insert(data_id_list,id_TV,OPC_LISTPOS_TAIL);   					data_nums_1++;   				}   				   #				op_pk_send(pk_TV,DISCARD_STRM);   				if(debug)   -					printf("Data has arrived at sink!!!\n");   			}else   			{   ,				//insert the DATA packet into data_queue   7				op_subq_pk_insert (data_queue,pk_TV,OPC_QPOS_TAIL);   			}   		   			//wait SIFS time to send ACK   			time = SIFS;   =			op_intrpt_schedule_self(op_sim_time()+time,SEND_ACK_CODE);   			if(debug)   ;				printf("Node:%d, Grade:%d, time:%f, in first period.\n\   #					Successfully received DATA.\n\   					Waiting to reply ACK.\n",\   '					node_address,grade,op_sim_time());   		}else   		{   			op_pk_destroy(pk_TV);   		}   	}else   	{   		op_pk_destroy(pk_TV);   	}   }   else   //if(pk_type != data_pk)   {	   
	if(debug)   9		printf("Node:%d, Grade:%d, time:%f, in first period.\n\   C			The received pk is not RTS, CTS, or DATA. The pk type is: %d.\n\   			Destroy this pk.\n",\   -			node_address,grade,op_sim_time(),pk_type);   		   	op_pk_destroy(pk_TV);   }	   
                     
   џџџџ   
          pr_state        f   Z          
   	wait DATA   
       
      
//send CTS   if(pk_TV!=NULL)   {   	op_pk_destroy(pk_TV);   }       'pk_TV = op_pk_create_fmt("MAC_CTS_PK");   $op_pk_nfd_set(pk_TV,"Type", cts_pk);   (op_pk_nfd_set(pk_TV,"Src",node_address);   'op_pk_nfd_set(pk_TV,"Dest",next_hop_1);   #op_pk_nfd_set(pk_TV,"Grade",grade);       op_pk_send(pk_TV, SEND_STRM);       //time statistic   #all_tx_time = all_tx_time + durCTS;       2//set timer for waiting DATA from upper grade node   time = durCTS + SIFS +durDATA;   Vwait_DATA_event = op_intrpt_schedule_self(op_sim_time() + time,SLEEP_FROM_FIRST_CODE);   	if(debug)   8	printf("Node:%d, Grade:%d, time:%f, in first period.\n\   		Have sent CTS.\n\   		Wating to receive Data.\n\   2		If no data, after %f secondes, go to sleep.\n",\   )		node_address,grade,op_sim_time(),time);   
                     
   џџџџ   
          pr_state        о             
   send ACK   
       
      
//send ACK   if(pk_TV!=NULL)   {   	op_pk_destroy(pk_TV);   }       'pk_TV = op_pk_create_fmt("MAC_ACK_PK");   #op_pk_nfd_set(pk_TV,"Type",ack_pk);   (op_pk_nfd_set(pk_TV,"Src",node_address);   'op_pk_nfd_set(pk_TV,"Dest",next_hop_1);   #op_pk_nfd_set(pk_TV,"Grade",grade);       op_pk_send(pk_TV,SEND_STRM);       //time statistic   #all_tx_time = all_tx_time + durACK;       Fop_intrpt_schedule_self(op_sim_time() + durACK,SLEEP_FROM_FIRST_CODE);   	if(debug)   8	printf("Node:%d, Grade:%d, time:%f, in first period.\n\   		Have replied ACK.\n\   /		Go to sleep after finishing sending ACK.\n",\   $		node_address,grade,op_sim_time());   
                     
   џџџџ   
          pr_state        о            
   carrier sense(1)   
       
      	if(debug)   {   _	printf("Node:%d, time:%f. In first period.\nНјШы statwire жаЖЯ\n",node_address,op_sim_time());   ]	printf("up: the received snr=%E.intrpt_code=%d\n\n",op_stat_local_read(0),op_intrpt_code());   }   7if(op_ev_valid(decrease_CW_event) && (one_two_cw == 2))   {   2	//the channel is sensed busy before replying CTS.   %	mac_flags->busy_before_cts=OPC_TRUE;    	//op_ev_cancel(send_CTS_event);   @	//op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_FIRST_CODE);   
	if(debug)   C		printf("Channel is busy, go to sleep after the current slot.\n");   	   }		       
                     
   џџџџ   
          pr_state        о  ў          
   carrier sense(2)   
       
      	if(debug)   L	printf("Node:%d, time:%f. In second period.\n",node_address,op_sim_time());   	if(debug)   {    	printf("НјШы statwire жаЖЯ\n");   _	printf("down: the received snr=%E.intrpt_code=%d\n\n",op_stat_local_read(0),op_intrpt_code());   }           "if(op_ev_valid(decrease_CW_event))   {   #	//op_ev_cancel(decrease_CW_event);   %	mac_flags->busy_before_rts=OPC_TRUE;   A	//op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_SECOND_CODE);   
	if(debug)   C		printf("Channel is busy, go to sleep after the current slot.\n");   }   
                     
   џџџџ   
          pr_state          в   в          
   start grade   
       
      &//Sink will execute the following code   
grade = 0;   .op_ima_obj_attr_set(process_id,"grade",grade);   //sink_id = node_address;       )pk_TV = op_pk_create_fmt("MAC_GRADE_PK");   'op_pk_nfd_set(pk_TV, "Type", grade_pk);   +//op_pk_nfd_set(pk_TV, "Sink ID", sink_id);   1op_pk_nfd_set(pk_TV,"Previous Hop",node_address);   'op_pk_nfd_set(pk_TV, "Grade", grade+1);       op_pk_send(pk_TV, SEND_STRM);   
                     
   џџџџ   
          pr_state          $            7  с      щ  <  z            
   tr_1   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition                D          а  :  e  ;          
   tr_28   
       
   CONTEND_TO_SEND_RTS   
       џџџџ          
    џџџџ   
       
    џџџџ   
                    pr_transition             	    |          `            
   tr_32   
       
   GO_TO_SLEEP   
       
џџџџ   
       
    џџџџ   
       
   џџџџ   
                 
   pr_transition   
   "      
     У       {  і   б  g   б          
   tr_34   
       
   WAKING_TO_WAIT_RTS   
       џџџџ          
    џџџџ   
       
    џџџџ   
                    pr_transition      %   	   
  "       y  q  B  J  B    h   ж          
   tr_37   
       
   	WAKING_UP   
       џџџџ          
    џџџџ   
       
    џџџџ   
                    pr_transition      (   	     1  ф     i    A  Л  A    d  '          
   tr_40   
       
   WAKING_TO_SEND_RTS   
       џџџџ          
    џџџџ   
       
    џџџџ   
                    pr_transition      8      	  а  V                     
   tr_56   
       
   SLEEP_FROM_FIRST   
       
џџџџ   
       
    џџџџ   
          џџџџ                       pr_transition      9   
     в   №        в              
   tr_57   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      ;        ж         <  (            
   tr_59   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      <        §  [     -  ќ  ъ  Д          
   tr_60   
       
   SEND_RTS   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      =      	  н  О     *  љ  }            
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
   B        ^  x     >  ј  c            
   tr_66   
       
   FROM_LOWER && transceiver_state   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      G        J  X     Z    ;            
   tr_71   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      H          @     @    Ъ  {          
   tr_72   
       
   	SEND_DATA   
       џџџџ          
    џџџџ   
       
    џџџџ   
                    pr_transition      I          6     Ц  o  D  ў          
   tr_73   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      J        љ        (   ї  ѕ   `          
   tr_74   
       
   FROM_LOWER && transceiver_state   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      K           А     ь   g     ј          
   tr_75   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      L        W   Е     =   §  i   u          
   tr_76   
       
   SEND_CTS   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      M        H   В     ^   l  /   ј          
   tr_77   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      O           е     <    з             
   tr_79   
       
   SEND_ACK   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      P           в     Ь     <            
   tr_80   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      Y          [     ў    ,            
   tr_89   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      Z        +  G     $      =  L  =  .  "          
   tr_90   
       
   default   
       џџџџ          
    џџџџ   
       
    џџџџ   
                    pr_transition      [   	   	  v  Р     p    U  З    З              
   tr_91   
       
   default   
       џџџџ          
    џџџџ   
       
    џџџџ   
                    pr_transition      \        /  Ъ     *  ь    г  S  г  /  т          
   tr_92   
       
   default   
       џџџџ          
    џџџџ   
       
    џџџџ   
                    pr_transition      ]               D  
  Ю  	          
   tr_93   
       
   CHECK_CHANNEL   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      ^               У    A            
   tr_94   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      _          ь     A  ё  Ы  ѓ          
   tr_95   
       
   CHECK_CHANNEL   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      `          ќ     Р  џ  C  њ          
   tr_96   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      a         $  2     p  }   е   ц          
   tr_97   
       
   START_GRADE   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      b         2  *      ч   с  z  s          
   tr_98   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      d                 n     Ў          
   tr_100   
       
   SEND_GM   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      e                  Ў    k          
   tr_101   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      f          џ     ~    ~  Z          
   tr_102   
       
   FROM_LOWER && transceiver_state   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition      g          §       [              
   tr_103   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition      l        J       n    U  t  U    n            
   tr_108   
       
   default   
       џџџџ          
    џџџџ   
       
    џџџџ   
                    pr_transition      !   q          Queue Length        џџџџ   normal   discrete        дВI­%У}   Queue Status          Hthe number of times a specific number of packets appearing in the queue.џџџџ   normal   discrete        дВI­%У}      Average Duty Cycle        џџџџ   normal   discrete        дВI­%У}                  
2010-05-18       Fusion of Routing and Mac        