MIL_3_Tfile_Hdr_ 145A 140A modeler 9 52F2CAAC 535EE5A1 27 wpd FeiTong 0 0 none none 0 0 none 5B661548 35F8 0 0 0 0 0 0 1e80 8                                                                                                                                                                                                                                                                                                                                                                                                   ЋЭg      @      к  о  ї  2ђ  2і  3м  3р  3ь  3№  3є  ы      DATA Delay Log   џџџџџџџ   џџџџ       џџџџ      џџџџ      џџџџ           ЅZ             Throughput Delay Log   џџџџџџџ   џџџџ       џџџџ      џџџџ      џџџџ           ЅZ                 	   begsim intrpt         
   џџџџ   
   doc file            	nd_module      endsim intrpt         
   џџџџ   
   failure intrpts            disabled      intrpt interval         дВI­%У}џџџџ      priority          
   џџџџ   
   recovery intrpts            disabled      subqueue                     count    џџџ   
   џџџџ   
      list   	џџџ   
          
      super priority         
    џџџџ   
          Objid	\process_id;       int	\node_type;       int	\data_id;       List *	\data_id_list;       int	\node_address;       Objid	\node_id;       &Stathandle	\e2e_delay_per_sink_handle;       int	\data_nums_per_sink;       double	\avg_delay_per_sink;       double	\steady_time;       List *	\delay_vs_grade_list;       int	\line_hops;       (Stathandle	\delay_for_each_grade_handle;       int	\debug;       .Stathandle	\avg_hop_pkt_delivery_ratio_handle;          Packet*		pk_TV;   double		ete_delay;   int			hop,*pkt_num_TV;   int 		src_TV;   //int			data_id_TV;   int			pk_type;   //File   
FILE*		in;   char 		temp_file_name[200];   int 		nodes_num, sink_num;   //char message[128];       DataID*		id_TV;   CGradeDelay*	gd_TV; //will be used together with delay_vs_grade_list   //for remote statistics   Ici* 		iciptr_TV;   int			list_size;   Rint			steady_flag; //indicate whether the data is generated after the steady state       int *hop_src_pkt_num;      B#define END	        		    	(op_intrpt_type() == OPC_INTRPT_ENDSIM)   //Define node type   #define sink 	1   #define sensor 	2       //Define remote-interrupt code    5#define REMOTE_STAT_CODE				500	/*remote statistics*/       g#define REMOTE_STAT ((op_intrpt_type() == OPC_INTRPT_REMOTE) && (op_intrpt_code() == REMOTE_STAT_CODE))   int data_nums = 0;   int data_nums_throughput = 0;   double avg_delay = 0.0;       QList* hop_src_pkt_num_list; //to record the num of pkts generating at each source       typedef struct   {   	int st_data_id;   }DataID;       typedef struct   {   N	double pk_num;//packet number from a specific grade (indicated by list index)   ,	double delay;//packet delay from this grade   }GradeDelay;       //functions   %static Boolean data_id_exist(int id);    static void deal_with_ici(void);   1   $static Boolean data_id_exist(int id)   {   //var   	int i,list_size;   	DataID* ID;   	Boolean flag=OPC_FALSE;   //in   	FIN(data_id_exist(int id));   //body   *	list_size=op_prg_list_size(data_id_list);   	for(i=0;i<list_size;i++){   2		ID=(DataID *)op_prg_list_access(data_id_list,i);   		if(ID->st_data_id==id){   			flag=OPC_TRUE;   				break;   		}   	}   //out   	FRET(flag);   }       static void deal_with_ici(void)   /*   A* after receiving remote interruption, deal with the bounded ici.   */   {   //var   	char ici_format_name[128];   	//for remote statistics   +	int node_gent_pkt_num, src_grade,*pkt_num;   	Ici  *iciptr;   //in   	FIN(deal_with_ici(void));   //body   3	/* Get the ICI associated with the new arrival. */   )	if(debug==4){printf("received ici.\n");}   	iciptr = op_intrpt_ici ();    '	op_ici_format(iciptr,ici_format_name);   	   0	if(strcmp(ici_format_name,"src_pkt_ici") == 0){   B		op_ici_attr_get_int32(iciptr,"sent pkt num",&node_gent_pkt_num);   7		op_ici_attr_get_int32(iciptr,"src grade",&src_grade);   		   H		pkt_num = (int *)op_prg_list_access(hop_src_pkt_num_list,src_grade-1);   +		*pkt_num =  *pkt_num + node_gent_pkt_num;   	}   //out   	FOUT;   }                                            J          
   init   
       
   B   process_id = op_id_self();   &node_id = op_topo_parent(process_id);   //data_nums = 0;   node_type = -1;       .op_ima_obj_attr_get(node_id, "Debug", &debug);       7op_ima_obj_attr_get(node_id, "user id", &node_address);       5op_ima_obj_attr_get(node_id, "Node Type",&node_type);   9op_ima_obj_attr_get(node_id, "Steady Time",&steady_time);   5op_ima_obj_attr_get(node_id, "Line Hops",&line_hops);   /*   Bif(op_ima_obj_attr_exists(op_topo_parent(process_id),"Node Type"))   {   H	op_ima_obj_attr_get(op_topo_parent(process_id),"Node Type",&node_type);   	   	if(node_type == sink)   	{   B		op_ima_obj_attr_get(process_id,"DATA Delay Log",temp_file_name);   "		in = fopen(temp_file_name,"at");   ,		fprintf(in,"		delay			hop		src_node\r\n");   		fclose(in);   	}   }else   {   A	op_ima_obj_attr_get(process_id,"DATA Delay Log",temp_file_name);   !	in = fopen(temp_file_name,"at");   "	fprintf(in,"		in sink_dest\r\n");   +	fprintf(in,"		delay			hop		src_node\r\n");   	fclose(in);   }	   */           if(node_type == sink){       #	data_id_list=op_prg_list_create();   	   ,	delay_vs_grade_list = op_prg_list_create();   	for(hop=0;hop<line_hops;hop++)   	{   =		gd_TV = (GradeDelay *)op_prg_mem_alloc(sizeof(GradeDelay));   		gd_TV->pk_num = 0.0;   		gd_TV->delay = 0.0;   A		op_prg_list_insert(delay_vs_grade_list,gd_TV,OPC_LISTPOS_TAIL);   	}   	   1	//hop_pkt_rcved_num_list = op_prg_list_create();   -	hop_src_pkt_num_list = op_prg_list_create();   	for(hop=0;hop<line_hops;hop++)   	{   4		pkt_num_TV = (int *)op_prg_mem_alloc(sizeof(int));   		*pkt_num_TV = 0;   G		op_prg_list_insert(hop_src_pkt_num_list,pkt_num_TV,OPC_LISTPOS_TAIL);   	}   }   //avg_delay=0;       `//avg_e2e_delay_handle = op_stat_reg("Average E2E Delay", OPC_STAT_INDEX_NONE, OPC_STAT_GLOBAL);   `e2e_delay_per_sink_handle=op_stat_reg("E2E Delay Per Sink",OPC_STAT_INDEX_NONE, OPC_STAT_LOCAL);   ddelay_for_each_grade_handle=op_stat_reg("Delay for Each Grade",OPC_STAT_INDEX_NONE, OPC_STAT_LOCAL);   pavg_hop_pkt_delivery_ratio_handle=op_stat_reg("Avg Hop Pkt Delivery Ratio",OPC_STAT_INDEX_NONE, OPC_STAT_LOCAL);       data_nums_per_sink=0;   avg_delay_per_sink=0.0;   
                     
   џџџџ   
          pr_state        J  J          
   idle   
                                       џџџџ             pr_state        J             
   RCV   
       
   9   &pk_TV = op_pk_get (op_intrpt_strm ());   %op_pk_nfd_get(pk_TV,"Type",&pk_type);       1//printf("The type of packet is: %d.\n",pk_type);       (op_pk_nfd_get(pk_TV,"Data No",&data_id);   0op_pk_nfd_get(pk_TV,"Steady Flag",&steady_flag);       nif(node_type == sink && op_sim_time() >= steady_time  && !data_id_exist(data_id)){ //comment: steady_flag == 1   	   2	id_TV=(DataID *)op_prg_mem_alloc(sizeof(DataID));   	id_TV->st_data_id=data_id;   9	op_prg_list_insert(data_id_list,id_TV,OPC_LISTPOS_TAIL);       	data_nums++;   	data_nums_per_sink++;   	   	if(op_sim_time()>=steady_time)   	{   		data_nums_throughput++;   2		//printf("ИіЪ§shi:%d\n\n",data_nums_throughput);   	}   	   @	//ete_delay = op_sim_time () - op_pk_creation_time_get (pk_TV);   1	//op_pk_nfd_get(pk_TV,"Create Time",&ete_delay);   ,	//ete_delay=op_pk_creation_time_get(pk_TV);   =	ete_delay = op_sim_time () - op_pk_creation_time_get(pk_TV);   E	//op_stat_write_t(avg_e2e_delay_handle,ete_delay,(double)data_nums);   9	//sprintf(message,"2. the ete delay is: %f.",ete_delay);   	//op_sim_message(message,"");   	   %	op_pk_nfd_get(pk_TV,"Hop Num",&hop);       $	op_pk_nfd_get(pk_TV,"Src",&src_TV);   	   	avg_delay=avg_delay+ete_delay;   3	avg_delay_per_sink = avg_delay_per_sink+ete_delay;       A	op_ima_obj_attr_get(process_id,"DATA Delay Log",temp_file_name);   !	in = fopen(temp_file_name,"at");       O    fprintf(in,"%d		%f		%d		%d	%d\r\n",data_nums,ete_delay,hop,src_TV,data_id);   6	//fprintf(in,"%d	%f	%d\r\n",data_nums,ete_delay,hop);       	fclose(in);   	   1	// statistic the packet delay for each hop/grade   #	op_pk_nfd_get(pk_TV,"Grade",&hop);   /	op_pk_nfd_get(pk_TV,"Create Time",&ete_delay);   5	//op_pk_nfd_get(pk_TV,"Create Time Two",&ete_delay);   	   E	gd_TV = (GradeDelay *)op_prg_list_access(delay_vs_grade_list,hop-1);   	gd_TV->pk_num += 1.0;   +	gd_TV->delay += op_sim_time() - ete_delay;   	   }   op_pk_destroy(pk_TV);   
                     
   џџџџ   
          pr_state        ў  J          
   end   
       J   X   Bif(op_ima_obj_attr_exists(op_topo_parent(process_id),"Node Type"))   {   /	if(node_type == sink) //&& node_address == -1)   	{   B		op_ima_obj_attr_get(process_id,"DATA Delay Log",temp_file_name);   "		in = fopen(temp_file_name,"at");   		fprintf(in,"\r\n\r\n");   		fclose(in);   		   7		nodes_num = op_topo_object_count (OPC_OBJTYPE_NDMOB);   ]		op_ima_obj_attr_get(op_id_from_name(node_id,OPC_OBJMTYPE_QPS,"pmac"),"Sink Num",&sink_num);   		   `//		op_stat_write_t(avg_e2e_delay_handle,(double)avg_delay/(double)data_nums,(double)data_nums);   Z//		op_stat_write_t(avg_e2e_delay_handle,(double)avg_delay/(double)data_nums,(double)0.0);   		   o		op_stat_write_t(e2e_delay_per_sink_handle,(double)avg_delay_per_sink/(double)data_nums_per_sink,(double)0.0);   		   H		op_ima_obj_attr_get(process_id,"Throughput Delay Log",temp_file_name);   "		in = fopen(temp_file_name,"at");   M		//fprintf(in,"%f %f\r\n",data_nums/(op_sim_time()-60),avg_delay/data_nums);   9		fprintf(in,"%f	%d\r\n",avg_delay/data_nums, data_nums);   		fclose(in);   		   #		//delay statistics for each grade   4		list_size = op_prg_list_size(delay_vs_grade_list);   "		for(hop = 0;hop<list_size;hop++)   		{   +			//if(debug == 4) printf("it's here.\n");   E			gd_TV = (GradeDelay *)op_prg_list_access(delay_vs_grade_list,hop);   Z			//if(debug == 4) printf("list_size = %d, rcved pkt num:%f.\n",list_size,gd_TV->pk_num);   			if(gd_TV->pk_num!=0)   			{   S				op_stat_write_t(delay_for_each_grade_handle, gd_TV->delay/gd_TV->pk_num,hop+1);   			}   			   		}   		   		   		/*   )		* *. Packet delivery ratio for each hop   		*/   #		for(hop = 0;hop<line_hops; hop++)   		{   F			hop_src_pkt_num=(int*)op_prg_list_access(hop_src_pkt_num_list,hop);   C			gd_TV=(GradeDelay *)op_prg_list_access(delay_vs_grade_list,hop);   k			if(debug == 4) printf("grade: %d,src pkt num:%d,dest pkt num:%f.\n",hop,*hop_src_pkt_num,gd_TV->pk_num);   			if(*hop_src_pkt_num != 0)   			{   r				op_stat_write_t(avg_hop_pkt_delivery_ratio_handle,(double)(gd_TV->pk_num)/(double)(*hop_src_pkt_num),hop+1.0);   			}   		}   		   		   D		/****************************************************************/   D		/*create ICI for statistic purpose; then set remote interruption*/   		if(node_address==-1){   2		iciptr_TV = op_ici_create("dest_rcved_pkt_ici");   @		op_ici_attr_set_int32(iciptr_TV, "dest rcved pkt", data_nums);   V		op_ici_attr_set_int32(iciptr_TV, "dest rcved pkt throughput", data_nums_throughput);   {		//op_ici_attr_set_ptr(iciptr_TV, "hop dest rcved pkt", delay_vs_grade_list); //ДЋЕнЕФЪЧlist,дкiciжаЦфРраЭЩшжУЮЊ structure   		   		op_ici_install (iciptr_TV);   c		op_intrpt_force_remote (REMOTE_STAT_CODE,op_id_from_name(node_id,OPC_OBJTYPE_PROC,"statistics"));   		op_ici_install (OPC_NIL);       		}   	}   }else   {	   A	op_ima_obj_attr_get(process_id,"DATA Delay Log",temp_file_name);   !	in = fopen(temp_file_name,"at");   	fprintf(in,"\r\n\r\n");   	fclose(in);   }                   if(node_type == sink){   !	op_prg_list_free (data_id_list);    	op_prg_mem_free (data_id_list);   	   (	op_prg_list_free (delay_vs_grade_list);   '	op_prg_mem_free (delay_vs_grade_list);       z	op_prg_list_free (hop_src_pkt_num_list); //since hop_src_pkt_num_list is a global variable, it can only be freed one time   (	op_prg_mem_free (hop_src_pkt_num_list);   }   J                         џџџџ             pr_state        J  ў          
   stat   
       
      deal_with_ici();   
                     
   џџџџ   
          pr_state                        ћ  J      Њ  I  K  J          
   tr_0   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition              B   ю     B  5  D   Б          
   tr_1   
       
   #op_intrpt_type() == OPC_INTRPT_STRM   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition              Q   я     R   Ў  Q  .          
   tr_2   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition              Ѕ  V     ^  K  ѕ  J          
   tr_3   
       
   END   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition              A  Ѕ     A  _  A  ъ          
   tr_4   
       
   REMOTE_STAT   
       џџџџ          
    џџџџ   
          џџџџ                       pr_transition              S  Ё     S  ч  R  Z          
   tr_5   
       џџџџ          џџџџ          
    џџџџ   
          џџџџ                       pr_transition                   E2E Delay Per Sink        џџџџ   normal   discrete        дВI­%У}   Delay for Each Grade        џџџџ   normal   discrete        дВI­%У}   Avg Hop Pkt Delivery Ratio        џџџџ   normal   discrete        дВI­%У}                            