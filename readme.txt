
scanner_framework

===

����̽����,���������ֵ�����̽�����������豸,̽�����������С,���ܶ�,���Ҵ��з������Ӵ�������͸���������ӿ����ն�,ͨ�����ݲ��ö�̬����,��Ҳ���¾�������֪�����ڸɻ��¶���,Ϊ�˷����ƽ�һЩ�������豸,�ڲ����������ƽ⹦��(��ʱ֧��HTTP �ƽ�).���������Щ�������㲻������,����ʹ�ö˿�ӳ�������Ҫ�Ĺ���ֱ��ͨ������Խӵ�������ĳָ̨���������˿��Ͻ���ɨ��..

***

###LCatro

***

###������ʽ
scanner.exe ����̨����
scanner.exe -bind [%port%] �󶨶˿�,Զ�̷���
scanner.exe -recon %ip% [%port%] ��������,Զ�̷���,Ĭ����80 [WARNING! �ǵ�������reverse_server ,��Ȼscanner.exe ���ܳɹ�����]

###ʹ�÷���
ɨ�赱ǰ���δ�������,�����Զ��Ѽ�����
using:arp
��ȡ��ǰ������������Ϣ
using:local
���������Ƿ���ͨ
using:ping %ip%
TCP SYN ɨ������
using:scan %ip% [-P:[port1,port2,port3,...]] [-F:[fake_ip1,fake_ip2,...]]
��ˮ��������
using:flood %ip% [-P:[port1,...]] [-F:[fake_ip1,...]]
�����ƽ�
using:crack %ip% %port% [%user_dictionary_path% %password_dictionary_path%]
·�ɸ���
using:tracert %ip%
ץȡҳ��
using:getpage %ip% [-PORT:%port%] [-PATH:%path%]
�����˿�ת������
using:route -R:[%remote_ip%,%remote_port%] -L:[[%local_ip%,]%local_port%]
��ʾ����
using:help
�˳�
using:quit

###�����ƽ� crack
	�����ƽ⹦��ԭ����ͨ���Լ������ض���HTTP ���ݰ�Ȼ���������ֵ���ٲ��Գ��ʺ�����
	###ʲô�Ǳ��ʽ?
	���ʽ����˼�Ǹ�����һ��������ݵĿ��,�ڽ���������ٲ����л���ݱ��ʽ�ڵĹؼ������������,�����������ƽ������:
	
	��������192.168.1.103:80 ������PHP ������,��̽�������������ƽ�����
	
	crack 192.168.1.103 80
	
Ȼ�����ʾ������ʽ
	
input your crack express:
	
	�������ݰ�����
	



reverse_server �����������������õķ����
scanner.exe -bind ������������,����ʹ��putty ��Raw ��ʽ�����ӵ�ɨ����
