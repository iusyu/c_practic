
debuginfo_1：     文件格式 elf64-x86-64


Disassembly of section .init:

0000000000001000 <_init>:
    1000:	f3 0f 1e fa          	endbr64 
    1004:	48 83 ec 08          	sub    $0x8,%rsp
    1008:	48 8b 05 d9 2f 00 00 	mov    0x2fd9(%rip),%rax        # 3fe8 <__gmon_start__>
    100f:	48 85 c0             	test   %rax,%rax
    1012:	74 02                	je     1016 <_init+0x16>
    1014:	ff d0                	callq  *%rax
    1016:	48 83 c4 08          	add    $0x8,%rsp
    101a:	c3                   	retq   

Disassembly of section .plt:

0000000000001020 <.plt>:
    1020:	ff 35 e2 2f 00 00    	pushq  0x2fe2(%rip)        # 4008 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	ff 25 e4 2f 00 00    	jmpq   *0x2fe4(%rip)        # 4010 <_GLOBAL_OFFSET_TABLE_+0x10>
    102c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000001030 <free@plt>:
    1030:	ff 25 e2 2f 00 00    	jmpq   *0x2fe2(%rip)        # 4018 <free@GLIBC_2.2.5>
    1036:	68 00 00 00 00       	pushq  $0x0
    103b:	e9 e0 ff ff ff       	jmpq   1020 <.plt>

0000000000001040 <__stack_chk_fail@plt>:
    1040:	ff 25 da 2f 00 00    	jmpq   *0x2fda(%rip)        # 4020 <__stack_chk_fail@GLIBC_2.4>
    1046:	68 01 00 00 00       	pushq  $0x1
    104b:	e9 d0 ff ff ff       	jmpq   1020 <.plt>

0000000000001050 <printf@plt>:
    1050:	ff 25 d2 2f 00 00    	jmpq   *0x2fd2(%rip)        # 4028 <printf@GLIBC_2.2.5>
    1056:	68 02 00 00 00       	pushq  $0x2
    105b:	e9 c0 ff ff ff       	jmpq   1020 <.plt>

0000000000001060 <calloc@plt>:
    1060:	ff 25 ca 2f 00 00    	jmpq   *0x2fca(%rip)        # 4030 <calloc@GLIBC_2.2.5>
    1066:	68 03 00 00 00       	pushq  $0x3
    106b:	e9 b0 ff ff ff       	jmpq   1020 <.plt>

0000000000001070 <perror@plt>:
    1070:	ff 25 c2 2f 00 00    	jmpq   *0x2fc2(%rip)        # 4038 <perror@GLIBC_2.2.5>
    1076:	68 04 00 00 00       	pushq  $0x4
    107b:	e9 a0 ff ff ff       	jmpq   1020 <.plt>

Disassembly of section .text:

0000000000001080 <_start>:
    1080:	f3 0f 1e fa          	endbr64 
    1084:	31 ed                	xor    %ebp,%ebp
    1086:	49 89 d1             	mov    %rdx,%r9
    1089:	5e                   	pop    %rsi
    108a:	48 89 e2             	mov    %rsp,%rdx
    108d:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    1091:	50                   	push   %rax
    1092:	54                   	push   %rsp
    1093:	4c 8d 05 86 07 00 00 	lea    0x786(%rip),%r8        # 1820 <__libc_csu_fini>
    109a:	48 8d 0d 0f 07 00 00 	lea    0x70f(%rip),%rcx        # 17b0 <__libc_csu_init>
    10a1:	48 8d 3d c7 05 00 00 	lea    0x5c7(%rip),%rdi        # 166f <main>
    10a8:	ff 15 32 2f 00 00    	callq  *0x2f32(%rip)        # 3fe0 <__libc_start_main@GLIBC_2.2.5>
    10ae:	f4                   	hlt    
    10af:	90                   	nop

00000000000010b0 <deregister_tm_clones>:
    10b0:	48 8d 3d 99 2f 00 00 	lea    0x2f99(%rip),%rdi        # 4050 <__TMC_END__>
    10b7:	48 8d 05 92 2f 00 00 	lea    0x2f92(%rip),%rax        # 4050 <__TMC_END__>
    10be:	48 39 f8             	cmp    %rdi,%rax
    10c1:	74 15                	je     10d8 <deregister_tm_clones+0x28>
    10c3:	48 8b 05 0e 2f 00 00 	mov    0x2f0e(%rip),%rax        # 3fd8 <_ITM_deregisterTMCloneTable>
    10ca:	48 85 c0             	test   %rax,%rax
    10cd:	74 09                	je     10d8 <deregister_tm_clones+0x28>
    10cf:	ff e0                	jmpq   *%rax
    10d1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    10d8:	c3                   	retq   
    10d9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000010e0 <register_tm_clones>:
    10e0:	48 8d 3d 69 2f 00 00 	lea    0x2f69(%rip),%rdi        # 4050 <__TMC_END__>
    10e7:	48 8d 35 62 2f 00 00 	lea    0x2f62(%rip),%rsi        # 4050 <__TMC_END__>
    10ee:	48 29 fe             	sub    %rdi,%rsi
    10f1:	48 89 f0             	mov    %rsi,%rax
    10f4:	48 c1 ee 3f          	shr    $0x3f,%rsi
    10f8:	48 c1 f8 03          	sar    $0x3,%rax
    10fc:	48 01 c6             	add    %rax,%rsi
    10ff:	48 d1 fe             	sar    %rsi
    1102:	74 14                	je     1118 <register_tm_clones+0x38>
    1104:	48 8b 05 e5 2e 00 00 	mov    0x2ee5(%rip),%rax        # 3ff0 <_ITM_registerTMCloneTable>
    110b:	48 85 c0             	test   %rax,%rax
    110e:	74 08                	je     1118 <register_tm_clones+0x38>
    1110:	ff e0                	jmpq   *%rax
    1112:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    1118:	c3                   	retq   
    1119:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001120 <__do_global_dtors_aux>:
    1120:	f3 0f 1e fa          	endbr64 
    1124:	80 3d 25 2f 00 00 00 	cmpb   $0x0,0x2f25(%rip)        # 4050 <__TMC_END__>
    112b:	75 33                	jne    1160 <__do_global_dtors_aux+0x40>
    112d:	55                   	push   %rbp
    112e:	48 83 3d c2 2e 00 00 	cmpq   $0x0,0x2ec2(%rip)        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    1135:	00 
    1136:	48 89 e5             	mov    %rsp,%rbp
    1139:	74 0d                	je     1148 <__do_global_dtors_aux+0x28>
    113b:	48 8b 3d 06 2f 00 00 	mov    0x2f06(%rip),%rdi        # 4048 <__dso_handle>
    1142:	ff 15 b0 2e 00 00    	callq  *0x2eb0(%rip)        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    1148:	e8 63 ff ff ff       	callq  10b0 <deregister_tm_clones>
    114d:	c6 05 fc 2e 00 00 01 	movb   $0x1,0x2efc(%rip)        # 4050 <__TMC_END__>
    1154:	5d                   	pop    %rbp
    1155:	c3                   	retq   
    1156:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    115d:	00 00 00 
    1160:	c3                   	retq   
    1161:	66 66 2e 0f 1f 84 00 	data16 nopw %cs:0x0(%rax,%rax,1)
    1168:	00 00 00 00 
    116c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000001170 <frame_dummy>:
    1170:	f3 0f 1e fa          	endbr64 
    1174:	e9 67 ff ff ff       	jmpq   10e0 <register_tm_clones>

0000000000001179 <forward_pointer>:
    1179:	55                   	push   %rbp
    117a:	48 89 e5             	mov    %rsp,%rbp
    117d:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    1181:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    1185:	48 8b 00             	mov    (%rax),%rax
    1188:	48 8b 50 08          	mov    0x8(%rax),%rdx
    118c:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    1190:	48 89 10             	mov    %rdx,(%rax)
    1193:	90                   	nop
    1194:	5d                   	pop    %rbp
    1195:	c3                   	retq   

0000000000001196 <delete_node>:
    1196:	55                   	push   %rbp
    1197:	48 89 e5             	mov    %rsp,%rbp
    119a:	48 83 ec 20          	sub    $0x20,%rsp
    119e:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    11a2:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    11a6:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    11aa:	48 8b 40 08          	mov    0x8(%rax),%rax
    11ae:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
    11b2:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    11b6:	48 8b 00             	mov    (%rax),%rax
    11b9:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    11bd:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    11c1:	48 8b 50 08          	mov    0x8(%rax),%rdx
    11c5:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    11c9:	48 89 50 08          	mov    %rdx,0x8(%rax)
    11cd:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    11d1:	48 89 c7             	mov    %rax,%rdi
    11d4:	e8 57 fe ff ff       	callq  1030 <free@plt>
    11d9:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    11dd:	c9                   	leaveq 
    11de:	c3                   	retq   

00000000000011df <add>:
    11df:	55                   	push   %rbp
    11e0:	48 89 e5             	mov    %rsp,%rbp
    11e3:	48 83 ec 20          	sub    $0x20,%rsp
    11e7:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    11eb:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    11ef:	48 83 7d e0 00       	cmpq   $0x0,-0x20(%rbp)
    11f4:	75 13                	jne    1209 <add+0x2a>
    11f6:	48 8d 3d 0b 0e 00 00 	lea    0xe0b(%rip),%rdi        # 2008 <_IO_stdin_used+0x8>
    11fd:	e8 6e fe ff ff       	callq  1070 <perror@plt>
    1202:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    1207:	eb 65                	jmp    126e <add+0x8f>
    1209:	be 10 00 00 00       	mov    $0x10,%esi
    120e:	bf 01 00 00 00       	mov    $0x1,%edi
    1213:	e8 48 fe ff ff       	callq  1060 <calloc@plt>
    1218:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    121c:	48 83 7d f8 00       	cmpq   $0x0,-0x8(%rbp)
    1221:	75 13                	jne    1236 <add+0x57>
    1223:	48 8d 3d 02 0e 00 00 	lea    0xe02(%rip),%rdi        # 202c <_IO_stdin_used+0x2c>
    122a:	e8 41 fe ff ff       	callq  1070 <perror@plt>
    122f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    1234:	eb 38                	jmp    126e <add+0x8f>
    1236:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    123a:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
    123e:	48 89 10             	mov    %rdx,(%rax)
    1241:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    1245:	48 c7 40 08 00 00 00 	movq   $0x0,0x8(%rax)
    124c:	00 
    124d:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1251:	48 8b 50 08          	mov    0x8(%rax),%rdx
    1255:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    1259:	48 89 50 08          	mov    %rdx,0x8(%rax)
    125d:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1261:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
    1265:	48 89 50 08          	mov    %rdx,0x8(%rax)
    1269:	b8 00 00 00 00       	mov    $0x0,%eax
    126e:	c9                   	leaveq 
    126f:	c3                   	retq   

0000000000001270 <_add_front>:
    1270:	55                   	push   %rbp
    1271:	48 89 e5             	mov    %rsp,%rbp
    1274:	48 83 ec 20          	sub    $0x20,%rsp
    1278:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    127c:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    1280:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1284:	48 8b 40 08          	mov    0x8(%rax),%rax
    1288:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
    128c:	48 89 d6             	mov    %rdx,%rsi
    128f:	48 89 c7             	mov    %rax,%rdi
    1292:	e8 48 ff ff ff       	callq  11df <add>
    1297:	89 45 fc             	mov    %eax,-0x4(%rbp)
    129a:	83 7d fc ff          	cmpl   $0xffffffff,-0x4(%rbp)
    129e:	75 11                	jne    12b1 <_add_front+0x41>
    12a0:	48 8d 3d 97 0d 00 00 	lea    0xd97(%rip),%rdi        # 203e <_IO_stdin_used+0x3e>
    12a7:	e8 c4 fd ff ff       	callq  1070 <perror@plt>
    12ac:	8b 45 fc             	mov    -0x4(%rbp),%eax
    12af:	eb 15                	jmp    12c6 <_add_front+0x56>
    12b1:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    12b5:	48 8b 00             	mov    (%rax),%rax
    12b8:	48 8d 50 01          	lea    0x1(%rax),%rdx
    12bc:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    12c0:	48 89 10             	mov    %rdx,(%rax)
    12c3:	8b 45 fc             	mov    -0x4(%rbp),%eax
    12c6:	c9                   	leaveq 
    12c7:	c3                   	retq   

00000000000012c8 <_add_back>:
    12c8:	55                   	push   %rbp
    12c9:	48 89 e5             	mov    %rsp,%rbp
    12cc:	48 83 ec 20          	sub    $0x20,%rsp
    12d0:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    12d4:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    12d8:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    12dc:	48 8b 40 10          	mov    0x10(%rax),%rax
    12e0:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
    12e4:	48 89 d6             	mov    %rdx,%rsi
    12e7:	48 89 c7             	mov    %rax,%rdi
    12ea:	e8 f0 fe ff ff       	callq  11df <add>
    12ef:	89 45 fc             	mov    %eax,-0x4(%rbp)
    12f2:	83 7d fc ff          	cmpl   $0xffffffff,-0x4(%rbp)
    12f6:	75 11                	jne    1309 <_add_back+0x41>
    12f8:	48 8d 3d 57 0d 00 00 	lea    0xd57(%rip),%rdi        # 2056 <_IO_stdin_used+0x56>
    12ff:	e8 6c fd ff ff       	callq  1070 <perror@plt>
    1304:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1307:	eb 29                	jmp    1332 <_add_back+0x6a>
    1309:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    130d:	48 8b 40 10          	mov    0x10(%rax),%rax
    1311:	48 8b 50 08          	mov    0x8(%rax),%rdx
    1315:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1319:	48 89 50 10          	mov    %rdx,0x10(%rax)
    131d:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1321:	48 8b 00             	mov    (%rax),%rax
    1324:	48 8d 50 01          	lea    0x1(%rax),%rdx
    1328:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    132c:	48 89 10             	mov    %rdx,(%rax)
    132f:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1332:	c9                   	leaveq 
    1333:	c3                   	retq   

0000000000001334 <_delete>:
    1334:	55                   	push   %rbp
    1335:	48 89 e5             	mov    %rsp,%rbp
    1338:	48 83 ec 40          	sub    $0x40,%rsp
    133c:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
    1340:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
    1344:	48 89 55 c8          	mov    %rdx,-0x38(%rbp)
    1348:	48 89 4d c0          	mov    %rcx,-0x40(%rbp)
    134c:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    1353:	00 00 
    1355:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    1359:	31 c0                	xor    %eax,%eax
    135b:	48 83 7d d8 00       	cmpq   $0x0,-0x28(%rbp)
    1360:	74 15                	je     1377 <_delete+0x43>
    1362:	48 83 7d d0 00       	cmpq   $0x0,-0x30(%rbp)
    1367:	74 0e                	je     1377 <_delete+0x43>
    1369:	48 83 7d c8 00       	cmpq   $0x0,-0x38(%rbp)
    136e:	74 07                	je     1377 <_delete+0x43>
    1370:	48 83 7d c0 00       	cmpq   $0x0,-0x40(%rbp)
    1375:	75 16                	jne    138d <_delete+0x59>
    1377:	48 8d 3d ed 0c 00 00 	lea    0xced(%rip),%rdi        # 206b <_IO_stdin_used+0x6b>
    137e:	e8 ed fc ff ff       	callq  1070 <perror@plt>
    1383:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    1388:	e9 92 00 00 00       	jmpq   141f <_delete+0xeb>
    138d:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    1391:	48 8b 40 08          	mov    0x8(%rax),%rax
    1395:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
    1399:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    139d:	48 8b 40 08          	mov    0x8(%rax),%rax
    13a1:	48 8b 40 08          	mov    0x8(%rax),%rax
    13a5:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
    13a9:	eb 66                	jmp    1411 <_delete+0xdd>
    13ab:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    13af:	48 8b 00             	mov    (%rax),%rax
    13b2:	48 8b 55 d0          	mov    -0x30(%rbp),%rdx
    13b6:	48 8b 4d c8          	mov    -0x38(%rbp),%rcx
    13ba:	48 89 d6             	mov    %rdx,%rsi
    13bd:	48 89 c7             	mov    %rax,%rdi
    13c0:	ff d1                	callq  *%rcx
    13c2:	85 c0                	test   %eax,%eax
    13c4:	74 33                	je     13f9 <_delete+0xc5>
    13c6:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
    13ca:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    13ce:	48 89 d6             	mov    %rdx,%rsi
    13d1:	48 89 c7             	mov    %rax,%rdi
    13d4:	e8 bd fd ff ff       	callq  1196 <delete_node>
    13d9:	48 89 c2             	mov    %rax,%rdx
    13dc:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
    13e0:	48 89 d7             	mov    %rdx,%rdi
    13e3:	ff d0                	callq  *%rax
    13e5:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    13e9:	48 8b 00             	mov    (%rax),%rax
    13ec:	48 8d 50 ff          	lea    -0x1(%rax),%rdx
    13f0:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    13f4:	48 89 10             	mov    %rdx,(%rax)
    13f7:	eb 18                	jmp    1411 <_delete+0xdd>
    13f9:	48 8d 45 f0          	lea    -0x10(%rbp),%rax
    13fd:	48 89 c7             	mov    %rax,%rdi
    1400:	e8 74 fd ff ff       	callq  1179 <forward_pointer>
    1405:	48 8d 45 e8          	lea    -0x18(%rbp),%rax
    1409:	48 89 c7             	mov    %rax,%rdi
    140c:	e8 68 fd ff ff       	callq  1179 <forward_pointer>
    1411:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    1415:	48 85 c0             	test   %rax,%rax
    1418:	75 91                	jne    13ab <_delete+0x77>
    141a:	b8 00 00 00 00       	mov    $0x0,%eax
    141f:	48 8b 4d f8          	mov    -0x8(%rbp),%rcx
    1423:	64 48 2b 0c 25 28 00 	sub    %fs:0x28,%rcx
    142a:	00 00 
    142c:	74 05                	je     1433 <_delete+0xff>
    142e:	e8 0d fc ff ff       	callq  1040 <__stack_chk_fail@plt>
    1433:	c9                   	leaveq 
    1434:	c3                   	retq   

0000000000001435 <_get_iter>:
    1435:	55                   	push   %rbp
    1436:	48 89 e5             	mov    %rsp,%rbp
    1439:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    143d:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1441:	48 8b 40 08          	mov    0x8(%rax),%rax
    1445:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
    1449:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    144d:	48 8b 40 10          	mov    0x10(%rax),%rax
    1451:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    1455:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    1459:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
    145d:	5d                   	pop    %rbp
    145e:	c3                   	retq   

000000000000145f <Get_olist>:
    145f:	55                   	push   %rbp
    1460:	48 89 e5             	mov    %rsp,%rbp
    1463:	48 83 ec 20          	sub    $0x20,%rsp
    1467:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    146b:	be 38 00 00 00       	mov    $0x38,%esi
    1470:	bf 01 00 00 00       	mov    $0x1,%edi
    1475:	e8 e6 fb ff ff       	callq  1060 <calloc@plt>
    147a:	48 89 c2             	mov    %rax,%rdx
    147d:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1481:	48 89 10             	mov    %rdx,(%rax)
    1484:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1488:	48 8b 00             	mov    (%rax),%rax
    148b:	48 85 c0             	test   %rax,%rax
    148e:	75 0a                	jne    149a <Get_olist+0x3b>
    1490:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    1495:	e9 c0 00 00 00       	jmpq   155a <Get_olist+0xfb>
    149a:	be 10 00 00 00       	mov    $0x10,%esi
    149f:	bf 01 00 00 00       	mov    $0x1,%edi
    14a4:	e8 b7 fb ff ff       	callq  1060 <calloc@plt>
    14a9:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    14ad:	48 83 7d f8 00       	cmpq   $0x0,-0x8(%rbp)
    14b2:	75 16                	jne    14ca <Get_olist+0x6b>
    14b4:	48 8d 3d ce 0b 00 00 	lea    0xbce(%rip),%rdi        # 2089 <_IO_stdin_used+0x89>
    14bb:	e8 b0 fb ff ff       	callq  1070 <perror@plt>
    14c0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    14c5:	e9 90 00 00 00       	jmpq   155a <Get_olist+0xfb>
    14ca:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    14ce:	48 c7 00 00 00 00 00 	movq   $0x0,(%rax)
    14d5:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    14d9:	48 c7 40 08 00 00 00 	movq   $0x0,0x8(%rax)
    14e0:	00 
    14e1:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    14e5:	48 8b 00             	mov    (%rax),%rax
    14e8:	48 c7 00 00 00 00 00 	movq   $0x0,(%rax)
    14ef:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    14f3:	48 8b 00             	mov    (%rax),%rax
    14f6:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
    14fa:	48 89 50 08          	mov    %rdx,0x8(%rax)
    14fe:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1502:	48 8b 00             	mov    (%rax),%rax
    1505:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
    1509:	48 89 50 10          	mov    %rdx,0x10(%rax)
    150d:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1511:	48 8b 00             	mov    (%rax),%rax
    1514:	48 8d 15 55 fd ff ff 	lea    -0x2ab(%rip),%rdx        # 1270 <_add_front>
    151b:	48 89 50 18          	mov    %rdx,0x18(%rax)
    151f:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1523:	48 8b 00             	mov    (%rax),%rax
    1526:	48 8d 15 9b fd ff ff 	lea    -0x265(%rip),%rdx        # 12c8 <_add_back>
    152d:	48 89 50 20          	mov    %rdx,0x20(%rax)
    1531:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1535:	48 8b 00             	mov    (%rax),%rax
    1538:	48 8d 15 f5 fd ff ff 	lea    -0x20b(%rip),%rdx        # 1334 <_delete>
    153f:	48 89 50 28          	mov    %rdx,0x28(%rax)
    1543:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1547:	48 8b 00             	mov    (%rax),%rax
    154a:	48 8d 15 e4 fe ff ff 	lea    -0x11c(%rip),%rdx        # 1435 <_get_iter>
    1551:	48 89 50 30          	mov    %rdx,0x30(%rax)
    1555:	b8 00 00 00 00       	mov    $0x0,%eax
    155a:	c9                   	leaveq 
    155b:	c3                   	retq   

000000000000155c <Destory_olist>:
    155c:	55                   	push   %rbp
    155d:	48 89 e5             	mov    %rsp,%rbp
    1560:	48 83 ec 20          	sub    $0x20,%rsp
    1564:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    1568:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    156c:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1570:	48 8b 00             	mov    (%rax),%rax
    1573:	48 8b 40 08          	mov    0x8(%rax),%rax
    1577:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
    157b:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    157f:	48 8b 40 08          	mov    0x8(%rax),%rax
    1583:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    1587:	eb 66                	jmp    15ef <Destory_olist+0x93>
    1589:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    158d:	48 8b 40 08          	mov    0x8(%rax),%rax
    1591:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    1595:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    1599:	48 8b 00             	mov    (%rax),%rax
    159c:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
    15a0:	48 89 c7             	mov    %rax,%rdi
    15a3:	ff d2                	callq  *%rdx
    15a5:	85 c0                	test   %eax,%eax
    15a7:	75 33                	jne    15dc <Destory_olist+0x80>
    15a9:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    15ad:	48 8b 40 08          	mov    0x8(%rax),%rax
    15b1:	48 8b 50 08          	mov    0x8(%rax),%rdx
    15b5:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    15b9:	48 89 50 08          	mov    %rdx,0x8(%rax)
    15bd:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    15c1:	48 89 c7             	mov    %rax,%rdi
    15c4:	e8 67 fa ff ff       	callq  1030 <free@plt>
    15c9:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    15cd:	48 8b 00             	mov    (%rax),%rax
    15d0:	48 8b 10             	mov    (%rax),%rdx
    15d3:	48 83 ea 01          	sub    $0x1,%rdx
    15d7:	48 89 10             	mov    %rdx,(%rax)
    15da:	eb 13                	jmp    15ef <Destory_olist+0x93>
    15dc:	48 8d 3d bb 0a 00 00 	lea    0xabb(%rip),%rdi        # 209e <_IO_stdin_used+0x9e>
    15e3:	e8 88 fa ff ff       	callq  1070 <perror@plt>
    15e8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    15ed:	eb 2d                	jmp    161c <Destory_olist+0xc0>
    15ef:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    15f3:	48 8b 40 08          	mov    0x8(%rax),%rax
    15f7:	48 85 c0             	test   %rax,%rax
    15fa:	75 8d                	jne    1589 <Destory_olist+0x2d>
    15fc:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    1600:	48 89 c7             	mov    %rax,%rdi
    1603:	e8 28 fa ff ff       	callq  1030 <free@plt>
    1608:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    160c:	48 8b 00             	mov    (%rax),%rax
    160f:	48 89 c7             	mov    %rax,%rdi
    1612:	e8 19 fa ff ff       	callq  1030 <free@plt>
    1617:	b8 00 00 00 00       	mov    $0x0,%eax
    161c:	c9                   	leaveq 
    161d:	c3                   	retq   

000000000000161e <detoor>:
    161e:	55                   	push   %rbp
    161f:	48 89 e5             	mov    %rsp,%rbp
    1622:	48 83 ec 10          	sub    $0x10,%rsp
    1626:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    162a:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    162e:	48 89 c7             	mov    %rax,%rdi
    1631:	e8 fa f9 ff ff       	callq  1030 <free@plt>
    1636:	b8 00 00 00 00       	mov    $0x0,%eax
    163b:	c9                   	leaveq 
    163c:	c3                   	retq   

000000000000163d <comppp>:
    163d:	55                   	push   %rbp
    163e:	48 89 e5             	mov    %rsp,%rbp
    1641:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    1645:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    1649:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    164d:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
    1651:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    1655:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    1659:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    165d:	8b 10                	mov    (%rax),%edx
    165f:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    1663:	8b 00                	mov    (%rax),%eax
    1665:	39 c2                	cmp    %eax,%edx
    1667:	0f 9f c0             	setg   %al
    166a:	0f b6 c0             	movzbl %al,%eax
    166d:	5d                   	pop    %rbp
    166e:	c3                   	retq   

000000000000166f <main>:
    166f:	55                   	push   %rbp
    1670:	48 89 e5             	mov    %rsp,%rbp
    1673:	48 83 ec 60          	sub    $0x60,%rsp
    1677:	89 7d ac             	mov    %edi,-0x54(%rbp)
    167a:	48 89 75 a0          	mov    %rsi,-0x60(%rbp)
    167e:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    1685:	00 00 
    1687:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    168b:	31 c0                	xor    %eax,%eax
    168d:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
    1691:	48 89 c7             	mov    %rax,%rdi
    1694:	e8 c6 fd ff ff       	callq  145f <Get_olist>
    1699:	48 c7 45 c8 00 00 00 	movq   $0x0,-0x38(%rbp)
    16a0:	00 
    16a1:	be 04 00 00 00       	mov    $0x4,%esi
    16a6:	bf 01 00 00 00       	mov    $0x1,%edi
    16ab:	e8 b0 f9 ff ff       	callq  1060 <calloc@plt>
    16b0:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
    16b4:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
    16b8:	48 8b 48 20          	mov    0x20(%rax),%rcx
    16bc:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
    16c0:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
    16c4:	48 89 d6             	mov    %rdx,%rsi
    16c7:	48 89 c7             	mov    %rax,%rdi
    16ca:	ff d1                	callq  *%rcx
    16cc:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
    16d0:	48 8b 50 30          	mov    0x30(%rax),%rdx
    16d4:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
    16d8:	48 89 c7             	mov    %rax,%rdi
    16db:	ff d2                	callq  *%rdx
    16dd:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
    16e1:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
    16e5:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    16e9:	48 8b 40 08          	mov    0x8(%rax),%rax
    16ed:	48 89 45 b8          	mov    %rax,-0x48(%rbp)
    16f1:	48 c7 45 c0 00 00 00 	movq   $0x0,-0x40(%rbp)
    16f8:	00 
    16f9:	eb 3c                	jmp    1737 <main+0xc8>
    16fb:	be 04 00 00 00       	mov    $0x4,%esi
    1700:	bf 01 00 00 00       	mov    $0x1,%edi
    1705:	e8 56 f9 ff ff       	callq  1060 <calloc@plt>
    170a:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
    170e:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
    1712:	89 c2                	mov    %eax,%edx
    1714:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    1718:	89 10                	mov    %edx,(%rax)
    171a:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
    171e:	48 8b 48 20          	mov    0x20(%rax),%rcx
    1722:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
    1726:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
    172a:	48 89 d6             	mov    %rdx,%rsi
    172d:	48 89 c7             	mov    %rax,%rdi
    1730:	ff d1                	callq  *%rcx
    1732:	48 83 45 c0 01       	addq   $0x1,-0x40(%rbp)
    1737:	48 83 7d c0 04       	cmpq   $0x4,-0x40(%rbp)
    173c:	76 bd                	jbe    16fb <main+0x8c>
    173e:	eb 30                	jmp    1770 <main+0x101>
    1740:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
    1744:	48 8b 00             	mov    (%rax),%rax
    1747:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
    174b:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    174f:	8b 00                	mov    (%rax),%eax
    1751:	89 c6                	mov    %eax,%esi
    1753:	48 8d 3d 5a 09 00 00 	lea    0x95a(%rip),%rdi        # 20b4 <_IO_stdin_used+0xb4>
    175a:	b8 00 00 00 00       	mov    $0x0,%eax
    175f:	e8 ec f8 ff ff       	callq  1050 <printf@plt>
    1764:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
    1768:	48 8b 40 08          	mov    0x8(%rax),%rax
    176c:	48 89 45 b8          	mov    %rax,-0x48(%rbp)
    1770:	48 83 7d b8 00       	cmpq   $0x0,-0x48(%rbp)
    1775:	75 c9                	jne    1740 <main+0xd1>
    1777:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
    177b:	48 8d 35 9c fe ff ff 	lea    -0x164(%rip),%rsi        # 161e <detoor>
    1782:	48 89 c7             	mov    %rax,%rdi
    1785:	e8 d2 fd ff ff       	callq  155c <Destory_olist>
    178a:	b8 00 00 00 00       	mov    $0x0,%eax
    178f:	48 8b 4d f8          	mov    -0x8(%rbp),%rcx
    1793:	64 48 2b 0c 25 28 00 	sub    %fs:0x28,%rcx
    179a:	00 00 
    179c:	74 05                	je     17a3 <main+0x134>
    179e:	e8 9d f8 ff ff       	callq  1040 <__stack_chk_fail@plt>
    17a3:	c9                   	leaveq 
    17a4:	c3                   	retq   
    17a5:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    17ac:	00 00 00 
    17af:	90                   	nop

00000000000017b0 <__libc_csu_init>:
    17b0:	f3 0f 1e fa          	endbr64 
    17b4:	41 57                	push   %r15
    17b6:	4c 8d 3d 2b 26 00 00 	lea    0x262b(%rip),%r15        # 3de8 <__frame_dummy_init_array_entry>
    17bd:	41 56                	push   %r14
    17bf:	49 89 d6             	mov    %rdx,%r14
    17c2:	41 55                	push   %r13
    17c4:	49 89 f5             	mov    %rsi,%r13
    17c7:	41 54                	push   %r12
    17c9:	41 89 fc             	mov    %edi,%r12d
    17cc:	55                   	push   %rbp
    17cd:	48 8d 2d 1c 26 00 00 	lea    0x261c(%rip),%rbp        # 3df0 <__do_global_dtors_aux_fini_array_entry>
    17d4:	53                   	push   %rbx
    17d5:	4c 29 fd             	sub    %r15,%rbp
    17d8:	48 83 ec 08          	sub    $0x8,%rsp
    17dc:	e8 1f f8 ff ff       	callq  1000 <_init>
    17e1:	48 c1 fd 03          	sar    $0x3,%rbp
    17e5:	74 1f                	je     1806 <__libc_csu_init+0x56>
    17e7:	31 db                	xor    %ebx,%ebx
    17e9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    17f0:	4c 89 f2             	mov    %r14,%rdx
    17f3:	4c 89 ee             	mov    %r13,%rsi
    17f6:	44 89 e7             	mov    %r12d,%edi
    17f9:	41 ff 14 df          	callq  *(%r15,%rbx,8)
    17fd:	48 83 c3 01          	add    $0x1,%rbx
    1801:	48 39 dd             	cmp    %rbx,%rbp
    1804:	75 ea                	jne    17f0 <__libc_csu_init+0x40>
    1806:	48 83 c4 08          	add    $0x8,%rsp
    180a:	5b                   	pop    %rbx
    180b:	5d                   	pop    %rbp
    180c:	41 5c                	pop    %r12
    180e:	41 5d                	pop    %r13
    1810:	41 5e                	pop    %r14
    1812:	41 5f                	pop    %r15
    1814:	c3                   	retq   
    1815:	66 66 2e 0f 1f 84 00 	data16 nopw %cs:0x0(%rax,%rax,1)
    181c:	00 00 00 00 

0000000000001820 <__libc_csu_fini>:
    1820:	f3 0f 1e fa          	endbr64 
    1824:	c3                   	retq   

Disassembly of section .fini:

0000000000001828 <_fini>:
    1828:	f3 0f 1e fa          	endbr64 
    182c:	48 83 ec 08          	sub    $0x8,%rsp
    1830:	48 83 c4 08          	add    $0x8,%rsp
    1834:	c3                   	retq   
