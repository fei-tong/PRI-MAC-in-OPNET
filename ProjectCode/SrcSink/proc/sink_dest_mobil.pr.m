MIL_3_Tfile_Hdr_ 145A 140A modeler 9 4C889511 4C8999AA 2 china-0f9728557 Administrator 0 0 none none 0 0 none BC57E110 11C2 0 0 0 0 0 0 1e80 8                                                                                                                                                                                                                                                                                                                                                                                  ��g�      @   �   �  r  v  �  �  �  �  �  �  �  �  �      DATA Delay Log   �������   ����       ����      ����      ����           �Z                 	   begsim intrpt         
   ����   
   doc file            	nd_module      endsim intrpt         
   ����   
   failure intrpts            disabled      intrpt interval         ԲI�%��}����      priority              ����      recovery intrpts            disabled      subqueue                     count    ���   
   ����   
      list   	���   
          
      super priority             ����             Objid	\process_id;       int	\data_nums;       int	\node_type;          Packet 		* pk_TV;   double		ete_delay;   
int			hop;   int 		src_TV;   //File   
FILE		*in;   char 		temp_file_name[200];      B#define END	        		    	(op_intrpt_type() == OPC_INTRPT_ENDSIM)   //Define node type   #define sink 	1   #define sensor 	2                                              �  J          
   init   
       
      process_id = op_id_self();   data_nums = 0;   node_type = -1;   /*   Bif(op_ima_obj_attr_exists(op_topo_parent(process_id),"Node Type"))   {   H	op_ima_obj_attr_get(op_topo_parent(process_id),"Node Type",&node_type);   	   	if(node_type == sink)   	{   B		op_ima_obj_attr_get(process_id,"DATA Delay Log",temp_file_name);   "		in = fopen(temp_file_name,"at");   ,		fprintf(in,"		delay			hop		src_node\r\n");   		fclose(in);   	}   }else   {   A	op_ima_obj_attr_get(process_id,"DATA Delay Log",temp_file_name);   !	in = fopen(temp_file_name,"at");   "	fprintf(in,"		in sink_dest\r\n");   +	fprintf(in,"		delay			hop		src_node\r\n");   	fclose(in);   }	   */   
                     
   ����   
          pr_state        J  J          
   idle   
                                       ����             pr_state        J   �          
   RCV   
       J      &pk_TV = op_pk_get (op_intrpt_strm ());   data_nums++;   ?//ete_delay = op_sim_time () - op_pk_creation_time_get (pk_TV);   .op_pk_nfd_get(pk_TV,"Create Time",&ete_delay);   'ete_delay = op_sim_time () - ete_delay;       $op_pk_nfd_get(pk_TV,"Hop Num",&hop);       #op_pk_nfd_get(pk_TV,"Src",&src_TV);   op_pk_destroy(pk_TV);       @op_ima_obj_attr_get(process_id,"DATA Delay Log",temp_file_name);    in = fopen(temp_file_name,"at");       B//fprintf(in,"%d		%f		%d		%d\r\n",data_nums,ete_delay,hop,src_TV);   6fprintf(in,"%d	%f	%d\r\n",data_nums,ete_delay,src_TV);       fclose(in);   J                     
   ����   
          pr_state        �  J          
   end   
       
      Bif(op_ima_obj_attr_exists(op_topo_parent(process_id),"Node Type"))   {   H	op_ima_obj_attr_get(op_topo_parent(process_id),"Node Type",&node_type);   	if(node_type == sink)   	{   B		op_ima_obj_attr_get(process_id,"DATA Delay Log",temp_file_name);   "		in = fopen(temp_file_name,"at");   		fprintf(in,"\r\n\r\n");   		fclose(in);   	}   }else   {	   A	op_ima_obj_attr_get(process_id,"DATA Delay Log",temp_file_name);   !	in = fopen(temp_file_name,"at");   	fprintf(in,"\r\n\r\n");   	fclose(in);   }   
                         ����             pr_state                        �  J      �  I  K  J          
   tr_0   
       ����          ����          
    ����   
          ����                       pr_transition              B   �     B  5  D   �          
   tr_1   
       
   #op_intrpt_type() == OPC_INTRPT_STRM   
       ����          
    ����   
          ����                       pr_transition              Q   �     R   �  Q  .          
   tr_2   
       ����          ����          
    ����   
          ����                       pr_transition              �  V     ^  K  �  J          
   tr_3   
       
   END   
       ����          
    ����   
          ����                       pr_transition                                             