MIL_3_Tfile_Hdr_ 145A 140A modeler 6 4C8F4F0E 51C4791E E2 wpd FeiTong 0 0 none none 0 0 none 57573C4C 1C0F 0 0 0 0 0 0 1e80 8                                                                                                                                                                                                                                                                                                                                                                                                   Ф═gЅ      8   <   Z   ^  0  4  ш  Љ  №  э  ч              	node_site                       Communication Range                        @9                                                         ЦZ             Grade Record File                                                           ЦZ             Parameter Record File                                                           ЦZ             Log File                                                           ЦZ             Power Record File                                                         disabled      disable       ЦZ             	Node Type                               sensor                                     sink                sensor                 ЦZ                    
TIM source            none      altitude                           altitude modeling            relative to subnet-platform      	condition                      financial cost            0.00      hostname                   minimized icon            circle/#708090      phase                           priority                        role                   user id                                $   Ш          
   pmac   
       
   pmac   
          queue                   CW         
?љbMмыЕЧ       
      DIFS         
?ёzрG«{       
      Debug         
           
      	Retx File         
   kC:\dropbox_docs\Dropbox\AUVIC_Life\Research&Study\OPNET_MODELS_SELF\MAC\result\opnet_result\PRIMAC_retx.txt   
      SIFS         
?tzрG«{       
      Send GM Timer         
@              
      Sink Num          
          
      Sleep Factor          
      11   
      Start Grade Timer         
@$             
      Start Schedule Timer         
@N             
      durACK         
?єЄ+I║       
      durCTS         
?єЄ+I║       
      durDATA         
?дЊt╝j       
      durRTS         
?єЄ+I║       
      subqueue         
            count          
          
      list   	      
                bit capacity         
T▓IГ%ћ├}       
      pk capacity         	@$             	         bit capacity         
T▓IГ%ћ├}       
      pk capacity         
T▓IГ%ћ├}       
   
   
        R  R          
   tx   
       
            count          
          
      list   	      
            	data rate         
@├ѕ            
      	bandwidth         
@$             
      min frequency         
@>             
      power         
?tzрG«{       
   
   
          bpsk          
   dra_rxgroup_wsn   
       
   dra_txdel_wsn   
       
   NONE   
       
   dra_chanmatch   
       
   NONE   
       
   dra_propdel   
          ra_tx                       nd_radio_transmitter         tx range         
@o@            
          m       @o@                                                          -Transmission Range. The default value is 250m      debug         
           
                                                                 xif this variable is enabled, the related pipeline stage will be running in debug mode, i.e., printing debugging message.      if range         
@@            
          m       @@                                                          MInteference Range. The default value is 500m, 2 times the transmission range.   	   	   Ш  R          
   rx   
       
            count          
          
      list   	      
            	data rate         
@├ѕ            
      	bandwidth         
@$             
      min frequency         
@>             
   
   
          bpsk          ?­                                          
   NONE   
       
   dra_power_wsn   
       
   dra_bkgnoise   
       
   
dra_inoise   
       
   dra_snr   
       
   NONE   
       
   NONE   
       
   dra_ecc_wsn   
          ra_rx                       nd_radio_receiver         state         
          
                                                                          Ш   џ          
   gsrc   
       
   pri_source_poisson_proc   
          	processor                   Debug         
           
      	Send DATA         	           	         R   џ          
   collect data   
       J   pri_sink_dest_proc   J          	processor                   Throughput Delay Log         
   xC:\dropbox_docs\Dropbox\AUVIC_Life\Research&Study\OPNET_MODELS_SELF\MAC\result\opnet_result\PRIMAC_throput_delay_Log.txt   
                     0   ■  H  H   
       
   strm_0   
       
   src stream [0]   
       
   dest stream [0]   
                                                                                                nd_packet_stream             	           F     §   
       
   strm_1   
       
   src stream [0]   
       
   dest stream [0]   
                                              
@  ђ       
                                        nd_packet_stream          	            Ш   а  $   ы   
       
   strm_2   
       
   src stream [0]   
       
   dest stream [1]   
                                                                                                nd_packet_stream            	         З  K   Ш   Э  '   Э          
   rx_stat   
       
   channel [0]   
       
   &radio receiver.signal/noise ratio (dB)   
       
   
instat [0]   
                                              
           
       
           
                                           н▓IГ%ћ├}              
@C3P3:       
       
@U         
                                        nd_statistic_wire                     *   в  H   ъ   
       
   strm_3   
       
   src stream [1]   
       
   dest stream [0]   
                                              
@  ђ       
                                        nd_packet_stream                    U  F  U   э  ,   э          
   tx_stat   
       
   channel [0]   
       
   radio transmitter.busy   
       
   
instat [1]   
                                              
           
                                                            н▓IГ%ћ├}              н▓IГ%ћ├}              
@@ @       
                                        nd_statistic_wire                                 