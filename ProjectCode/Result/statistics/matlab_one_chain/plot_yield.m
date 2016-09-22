% Plot yield: Network yield, from 1hop - 10 hops, \xi = 14, 17, 20, traffic load: 0.1:0.1:1
% PRI-basic, PRI-ASM (adaptive schedule maintaince)
basic=[0.999855491	0.999588221	0.999640118	0.998381284	0.936637325	0.787597075	0.669122433	0.583615589	0.51992755	0.468067351;
0.999467691	0.999504345	0.999025976	0.931408076	0.749058755	0.6264317	0.535504613	0.472383105	0.420331241	0.377618136;
0.999736495	0.998763206	0.994702363	0.779056943	0.629474277	0.517785464	0.449035291	0.391434871	0.346836267	0.313288705];

asm=[0.999719402	0.99986317	0.999905694	0.999623137	0.999528223	0.999653501	0.999644703	0.999756752	0.999628473	0.999652393;
0.999585676	0.999443962	0.99948847	0.999517707	0.999637405	0.999472023	0.999472397	0.999462799	0.999539786	0.999610728;
1	0.999724227	0.999625318	0.999546933	0.999584793	0.999424322	0.999621999	0.999586168	0.999475189	0.999639346];


figure;
hold off;
arrival_rate=0.1:0.1:1;
plot(arrival_rate,basic(1,:),'ro-.');
hold on;
plot(arrival_rate,basic(2,:),'r>-.');
plot(arrival_rate,basic(3,:),'rx-.');


plot(arrival_rate,asm(1,:),'bo-');
plot(arrival_rate,asm(2,:),'b>-');
plot(arrival_rate,asm(3,:),'bx-');

% set(gca,'XTick',0.05:0.05:0.5);
% set(gca,'XTickLabel',0.05:0.05:0.5);
%set(gca,'Xdir','reverse')

xlabel('Traffic Load (packet/s)');
ylabel('Network Yield');
legend('PRI-basic, {{\it{\xi}} = 14}','PRI-basic, {{\it{\xi}} = 18}','PRI-basic, {{\it{\xi}} = 22}', ...
    'PRI-ASM, {{\it{\xi}} = 14}','PRI-ASM, {{\it{\xi}} = 18}','PRI-ASM, {{\it{\xi}} = 22}',3);
% grid on;