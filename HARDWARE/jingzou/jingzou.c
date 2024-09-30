#include "dance.h"
#include "led.h"
#include "delay.h"
#include "sys.h"
#include "exit.h" 
#include "uart.h"
#include "LobotSerialServo.h"
#include "bool.h"
#include "pwm.h"
#include "jingzou.h"

#define ID1 1
#define ID2 2
#define ID3 3
#define ID4 4
#define ID5 5
#define ID6 6
#define ID7 7
#define ID8 8
#define ID9 9
#define ID10 10

#define zl14 230
#define zl25 340
#define zl36 230

#define zzh 71
#define yzh 70

#define zzhi 30
#define yzhi 30
//5- 1-
#define yijian 0   //��һ��1��
#define wujia 10   //�ڶ���5��
#define liujia 15  //��һ��6��
#define zouluzuo 20
#define erliu 20
//��һ�lliu4    -20

#define ydshu 130
#define ceshijian 50
void zoulu(void)//�Ѿ�������0629����
{
// #1 P648 #2 P502 #3 P460 #4 P501 #5 P560 #6 P480 #7 P524 #8 P500 #9 P506 #10 P501
LobotSerialServoMove(1, 648, 400);
LobotSerialServoMove(2, 502, 400);
LobotSerialServoMove(3, 460, 400);
LobotSerialServoMove(4, 501, 400);
LobotSerialServoMove(5, 560, 400);
LobotSerialServoMove(6, 480, 400);
LobotSerialServoMove(7, 524, 400);
LobotSerialServoMove(8, 500, 400);
LobotSerialServoMove(9, 506, 400);
LobotSerialServoMove(10, 501, 400);
delay_ms(405);

// #1 P529 #2 P503 #3 P282 #4 P700 #5 P570 #6 P500 #7 P526 #8 P530 #9 P507 #10 P501
LobotSerialServoMove(1, 529, 400);
LobotSerialServoMove(2, 503, 400);
LobotSerialServoMove(3, 282, 400);
LobotSerialServoMove(4, 700, 400);
LobotSerialServoMove(5, 570, 400);
LobotSerialServoMove(6, 500, 400);
LobotSerialServoMove(7, 526, 400);
LobotSerialServoMove(8, 530, 400);
LobotSerialServoMove(9, 507, 400);
LobotSerialServoMove(10, 501, 400);
delay_ms(405);

// #1 P507 #2 P525 #3 P328 #4 P620 #5 P526 #6 P580 #7 P517 #8 P635 #9 P505 #10 P497
LobotSerialServoMove(1, 507, 400);
LobotSerialServoMove(2, 525, 400);
LobotSerialServoMove(3, 328, 400);
LobotSerialServoMove(4, 620, 400);
LobotSerialServoMove(5, 526, 400);
LobotSerialServoMove(6, 580, 400);
LobotSerialServoMove(7, 517, 400);
LobotSerialServoMove(8, 635, 400);
LobotSerialServoMove(9, 505, 400);
LobotSerialServoMove(10, 497, 400);
delay_ms(405);

// #1 P420 #2 P570 #3 P300 #4 P650 #5 P400 #6 P505 #7 P516 #8 P500 #9 P507 #10 P500
LobotSerialServoMove(1, 420, 500);
LobotSerialServoMove(2, 570, 500);
LobotSerialServoMove(3, 300, 500);
LobotSerialServoMove(4, 650, 500);
LobotSerialServoMove(5, 400, 500);
LobotSerialServoMove(6, 505, 500);
LobotSerialServoMove(7, 516, 500);
LobotSerialServoMove(8, 500, 500);
LobotSerialServoMove(9, 507, 500);
LobotSerialServoMove(10, 500, 500);
delay_ms(505);

// #1 P411 #2 P564 #3 P369 #4 P537 #5 P432 #6 P400 #7 P575 #8 P475 #9 P505 #10 P503
LobotSerialServoMove(1, 411, 500);
LobotSerialServoMove(2, 564, 500);
LobotSerialServoMove(3, 369, 500);
LobotSerialServoMove(4, 537, 500);
LobotSerialServoMove(5, 432, 500);
LobotSerialServoMove(6, 400, 500);
LobotSerialServoMove(7, 575, 500);
LobotSerialServoMove(8, 475, 500);
LobotSerialServoMove(9, 505, 500);
LobotSerialServoMove(10, 503, 500);
delay_ms(505);

// #1 P505 #2 P568 #3 P523 #4 P353 #5 P484 #6 P456 #7 P512 #8 P481 #9 P504 #10 P502
LobotSerialServoMove(1, 505, 500);
LobotSerialServoMove(2, 568, 500);
LobotSerialServoMove(3, 523, 500);
LobotSerialServoMove(4, 353, 500);
LobotSerialServoMove(5, 484, 500);
LobotSerialServoMove(6, 456, 500);
LobotSerialServoMove(7, 512, 500);
LobotSerialServoMove(8, 481, 500);
LobotSerialServoMove(9, 504, 500);
LobotSerialServoMove(10, 502, 500);
delay_ms(505);

// #1 P648 #2 P502 #3 P460 #4 P400 #5 P540 #6 P525 #7 P500 #8 P550 #9 P506 #10 P501
LobotSerialServoMove(1, 648, 500);
LobotSerialServoMove(2, 502, 500);
LobotSerialServoMove(3, 460, 500);
LobotSerialServoMove(4, 400, 500);
LobotSerialServoMove(5, 540, 500);
LobotSerialServoMove(6, 525, 500);
LobotSerialServoMove(7, 500, 500);
LobotSerialServoMove(8, 550, 500);
LobotSerialServoMove(9, 506, 500);
LobotSerialServoMove(10, 501, 500);
delay_ms(505);

// #1 P529 #2 P503 #3 P365 #4 P700 #5 P560 #6 P500 #7 P480 #8 P530 #9 P507 #10 P501
LobotSerialServoMove(1, 529, 800);
LobotSerialServoMove(2, 503, 800);
LobotSerialServoMove(3, 365, 800);
LobotSerialServoMove(4, 700, 800);
LobotSerialServoMove(5, 560, 800);
LobotSerialServoMove(6, 500, 800);
LobotSerialServoMove(7, 480, 800);
LobotSerialServoMove(8, 530, 800);
LobotSerialServoMove(9, 507, 800);
LobotSerialServoMove(10, 501, 800);
delay_ms(805);

// #1 P486 #2 P480 #3 P390 #4 P671 #5 P498 #6 P567 #7 P457 #8 P533 #9 P503 #10 P501
LobotSerialServoMove(1, 486, 400);
LobotSerialServoMove(2, 480, 400);
LobotSerialServoMove(3, 390, 400);
LobotSerialServoMove(4, 671, 400);
LobotSerialServoMove(5, 498, 400);
LobotSerialServoMove(6, 567, 400);
LobotSerialServoMove(7, 457, 400);
LobotSerialServoMove(8, 533, 400);
LobotSerialServoMove(9, 503, 400);
LobotSerialServoMove(10, 501, 400);
delay_ms(405);

// #1 P486 #2 P459 #3 P390 #4 P671 #5 P498 #6 P567 #7 P457 #8 P533 #9 P503 #10 P501
LobotSerialServoMove(1, 486, 400);
LobotSerialServoMove(2, 459, 400);
LobotSerialServoMove(3, 390, 400);
LobotSerialServoMove(4, 671, 400);
LobotSerialServoMove(5, 498, 400);
LobotSerialServoMove(6, 567, 400);
LobotSerialServoMove(7, 457, 400);
LobotSerialServoMove(8, 533, 400);
LobotSerialServoMove(9, 503, 400);
LobotSerialServoMove(10, 501, 400);
delay_ms(405);

// #1 P420 #2 P462 #3 P455 #4 P674 #5 P430 #6 P465 #7 P507 #8 P533 #9 P504 #10 P499
LobotSerialServoMove(1, 420, 500);
LobotSerialServoMove(2, 462, 500);
LobotSerialServoMove(3, 455, 500);
LobotSerialServoMove(4, 674, 500);
LobotSerialServoMove(5, 430, 500);
LobotSerialServoMove(6, 465, 500);
LobotSerialServoMove(7, 507, 500);
LobotSerialServoMove(8, 533, 500);
LobotSerialServoMove(9, 504, 500);
LobotSerialServoMove(10, 499, 500);
delay_ms(505);

// #1 P419 #2 P459 #3 P430 #4 P675 #5 P432 #6 P470 #7 P610 #8 P490 #9 P504 #10 P496
LobotSerialServoMove(1, 419, 500);
LobotSerialServoMove(2, 459, 500);
LobotSerialServoMove(3, 430, 500);
LobotSerialServoMove(4, 675, 500);
LobotSerialServoMove(5, 432, 500);
LobotSerialServoMove(6, 470, 500);
LobotSerialServoMove(7, 610, 500);
LobotSerialServoMove(8, 490, 500);
LobotSerialServoMove(9, 504, 500);
LobotSerialServoMove(10, 496, 500);
delay_ms(505);

// #1 P481 #2 P463 #3 P412 #4 P674 #5 P497 #6 P433 #7 P610 #8 P489 #9 P503 #10 P496
LobotSerialServoMove(1, 481, 500);
LobotSerialServoMove(2, 463, 500);
LobotSerialServoMove(3, 412, 500);
LobotSerialServoMove(4, 674, 500);
LobotSerialServoMove(5, 497, 500);
LobotSerialServoMove(6, 433, 500);
LobotSerialServoMove(7, 610, 500);
LobotSerialServoMove(8, 489, 500);
LobotSerialServoMove(9, 503, 500);
LobotSerialServoMove(10, 496, 500);
delay_ms(505);

// #1 P494 #2 P497 #3 P499 #4 P505 #5 P499 #6 P499 #7 P501 #8 P495 #9 P502 #10 P497
LobotSerialServoMove(1, 494, 400);
LobotSerialServoMove(2, 497, 400);
LobotSerialServoMove(3, 499, 400);
LobotSerialServoMove(4, 505, 400);
LobotSerialServoMove(5, 499, 400);
LobotSerialServoMove(6, 499, 400);
LobotSerialServoMove(7, 501, 400);
LobotSerialServoMove(8, 495, 400);
LobotSerialServoMove(9, 502, 400);
LobotSerialServoMove(10, 497, 400);
delay_ms(405);

}


void zuozhuan(void)
{
// #1 P500 #2 P500 #3 P500 #4 P500 #5 P500 #6 P500 #7 P500 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 500, 300);
LobotSerialServoMove(2, 500, 300);
LobotSerialServoMove(3, 500, 300);
LobotSerialServoMove(4, 500, 300);
LobotSerialServoMove(5, 500, 300);
LobotSerialServoMove(6, 500, 300);
LobotSerialServoMove(7, 500, 300);
LobotSerialServoMove(8, 500, 300);
LobotSerialServoMove(9, 500, 300);
LobotSerialServoMove(10, 500, 300);
delay_ms(305);

// #1 P430 #2 P498 #3 P498 #4 P500 #5 P370 #6 P498 #7 P500 #8 P498 #9 P502 #10 P502
LobotSerialServoMove(1, 430, 400);
LobotSerialServoMove(2, 498, 400);
LobotSerialServoMove(3, 498, 400);
LobotSerialServoMove(4, 500, 400);
LobotSerialServoMove(5, 370, 400);
LobotSerialServoMove(6, 498, 400);
LobotSerialServoMove(7, 500, 400);
LobotSerialServoMove(8, 498, 400);
LobotSerialServoMove(9, 502, 400);
LobotSerialServoMove(10, 502, 400);
delay_ms(405);

// #1 P420 #2 P500 #3 P498 #4 P500 #5 P455 #6 P515 #7 P500 #8 P504 #9 P498 #10 P400
LobotSerialServoMove(1, 420, 300);
LobotSerialServoMove(2, 500, 300);
LobotSerialServoMove(3, 498, 300);
LobotSerialServoMove(4, 500, 300);
LobotSerialServoMove(5, 455, 300);
LobotSerialServoMove(6, 515, 300);
LobotSerialServoMove(7, 500, 300);
LobotSerialServoMove(8, 504, 300);
LobotSerialServoMove(9, 498, 300);
LobotSerialServoMove(10, 400, 300);
delay_ms(305);

// #1 P420 #2 P501 #3 P497 #4 P454 #5 P455 #6 P449 #7 P557 #8 P501 #9 P497 #10 P400
LobotSerialServoMove(1, 420, 400);
LobotSerialServoMove(2, 501, 400);
LobotSerialServoMove(3, 497, 400);
LobotSerialServoMove(4, 454, 400);
LobotSerialServoMove(5, 455, 400);
LobotSerialServoMove(6, 449, 400);
LobotSerialServoMove(7, 557, 400);
LobotSerialServoMove(8, 501, 400);
LobotSerialServoMove(9, 497, 400);
LobotSerialServoMove(10, 400, 400);
delay_ms(405);

// #1 P498 #2 P528 #3 P499 #4 P460 #5 P509 #6 P444 #7 P555 #8 P501 #9 P502 #10 P400
LobotSerialServoMove(1, 498, 400);
LobotSerialServoMove(2, 528, 400);
LobotSerialServoMove(3, 499, 400);
LobotSerialServoMove(4, 460, 400);
LobotSerialServoMove(5, 509, 400);
LobotSerialServoMove(6, 444, 400);
LobotSerialServoMove(7, 555, 400);
LobotSerialServoMove(8, 501, 400);
LobotSerialServoMove(9, 502, 400);
LobotSerialServoMove(10, 400, 400);
delay_ms(405);

// #1 P510 #2 P528 #3 P499 #4 P460 #5 P475 #6 P444 #7 P555 #8 P501 #9 P502 #10 P424
LobotSerialServoMove(1, 510, 200);
LobotSerialServoMove(2, 528, 200);
LobotSerialServoMove(3, 499, 200);
LobotSerialServoMove(4, 460, 200);
LobotSerialServoMove(5, 475, 200);
LobotSerialServoMove(6, 444, 200);
LobotSerialServoMove(7, 555, 200);
LobotSerialServoMove(8, 501, 200);
LobotSerialServoMove(9, 502, 200);
LobotSerialServoMove(10, 424, 200);
delay_ms(205);

// #1 P624 #2 P570 #3 P496 #4 P460 #5 P555 #6 P452 #7 P540 #8 P485 #9 P498 #10 P425
LobotSerialServoMove(1, 624, 300);
LobotSerialServoMove(2, 570, 300);
LobotSerialServoMove(3, 496, 300);
LobotSerialServoMove(4, 460, 300);
LobotSerialServoMove(5, 555, 300);
LobotSerialServoMove(6, 452, 300);
LobotSerialServoMove(7, 540, 300);
LobotSerialServoMove(8, 485, 300);
LobotSerialServoMove(9, 498, 300);
LobotSerialServoMove(10, 425, 300);
delay_ms(305);

// #1 P531 #2 P438 #3 P497 #4 P578 #5 P570 #6 P451 #7 P568 #8 P505 #9 P498 #10 P505
LobotSerialServoMove(1, 531, 300);
LobotSerialServoMove(2, 438, 300);
LobotSerialServoMove(3, 497, 300);
LobotSerialServoMove(4, 578, 300);
LobotSerialServoMove(5, 570, 300);
LobotSerialServoMove(6, 451, 300);
LobotSerialServoMove(7, 568, 300);
LobotSerialServoMove(8, 505, 300);
LobotSerialServoMove(9, 498, 300);
LobotSerialServoMove(10, 505, 300);
delay_ms(305);

// #1 P555 #2 P439 #3 P499 #4 P580 #5 P527 #6 P451 #7 P567 #8 P503 #9 P502 #10 P501
LobotSerialServoMove(1, 555, 200);
LobotSerialServoMove(2, 439, 200);
LobotSerialServoMove(3, 499, 200);
LobotSerialServoMove(4, 580, 200);
LobotSerialServoMove(5, 527, 200);
LobotSerialServoMove(6, 451, 200);
LobotSerialServoMove(7, 567, 200);
LobotSerialServoMove(8, 503, 200);
LobotSerialServoMove(9, 502, 200);
LobotSerialServoMove(10, 501, 200);
delay_ms(205);

// #1 P484 #2 P443 #3 P497 #4 P578 #5 P498 #6 P451 #7 P565 #8 P503 #9 P498 #10 P502
LobotSerialServoMove(1, 484, 400);
LobotSerialServoMove(2, 443, 400);
LobotSerialServoMove(3, 497, 400);
LobotSerialServoMove(4, 578, 400);
LobotSerialServoMove(5, 498, 400);
LobotSerialServoMove(6, 451, 400);
LobotSerialServoMove(7, 565, 400);
LobotSerialServoMove(8, 503, 400);
LobotSerialServoMove(9, 498, 400);
LobotSerialServoMove(10, 502, 400);
delay_ms(405);

// #1 P493 #2 P499 #3 P500 #4 P505 #5 P500 #6 P499 #7 P504 #8 P503 #9 P497 #10 P501
LobotSerialServoMove(1, 493, 500);
LobotSerialServoMove(2, 499, 500);
LobotSerialServoMove(3, 500, 500);
LobotSerialServoMove(4, 505, 500);
LobotSerialServoMove(5, 500, 500);
LobotSerialServoMove(6, 499, 500);
LobotSerialServoMove(7, 504, 500);
LobotSerialServoMove(8, 503, 500);
LobotSerialServoMove(9, 497, 500);
LobotSerialServoMove(10, 501, 500);
delay_ms(505);
}

void youzhuan(void)
{
// #1 P500 #2 P500 #3 P500 #4 P500 #5 P500 #6 P500 #7 P500 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 500, 300);
LobotSerialServoMove(2, 500, 300);
LobotSerialServoMove(3, 500, 300);
LobotSerialServoMove(4, 500, 300);
LobotSerialServoMove(5, 500, 300);
LobotSerialServoMove(6, 500, 300);
LobotSerialServoMove(7, 500, 300);
LobotSerialServoMove(8, 500, 300);
LobotSerialServoMove(9, 500, 300);
LobotSerialServoMove(10, 500, 300);
	servo_angle4(90);
	servo_angle3(90);
	servo_angle2(40);
	servo_angle1(40);
delay_ms(305);

// #1 P630 #2 P498 #3 P503 #4 P499 #5 P575 #6 P498 #7 P500 #8 P498 #9 P502 #10 P502
LobotSerialServoMove(1, 630, 400);
LobotSerialServoMove(2, 498, 400);
LobotSerialServoMove(3, 503, 400);
LobotSerialServoMove(4, 499, 400);
LobotSerialServoMove(5, 575, 400);
LobotSerialServoMove(6, 498, 400);
LobotSerialServoMove(7, 500, 400);
LobotSerialServoMove(8, 498, 400);
LobotSerialServoMove(9, 502, 400);
LobotSerialServoMove(10, 502, 400);
	servo_angle4(10);
	servo_angle3(50);
	servo_angle2(80);
	servo_angle1(90);
delay_ms(405);

// #1 P612 #2 P498 #3 P504 #4 P500 #5 P567 #6 P500 #7 P499 #8 P498 #9 P600 #10 P502
LobotSerialServoMove(1, 612, 400);
LobotSerialServoMove(2, 498, 400);
LobotSerialServoMove(3, 504, 400);
LobotSerialServoMove(4, 500, 400);
LobotSerialServoMove(5, 567, 400);
LobotSerialServoMove(6, 500, 400);
LobotSerialServoMove(7, 499, 400);
LobotSerialServoMove(8, 498, 400);
LobotSerialServoMove(9, 600, 400);
LobotSerialServoMove(10, 502, 400);
	servo_angle4(20);
	servo_angle3(80);
	servo_angle2(10);
	servo_angle1(20);
delay_ms(405);

// #1 P605 #2 P449 #3 P501 #4 P557 #5 P564 #6 P501 #7 P454 #8 P497 #9 P595 #10 P503
LobotSerialServoMove(1, 605, 400);
LobotSerialServoMove(2, 449, 400);
LobotSerialServoMove(3, 501, 400);
LobotSerialServoMove(4, 557, 400);
LobotSerialServoMove(5, 564, 400);
LobotSerialServoMove(6, 501, 400);
LobotSerialServoMove(7, 454, 400);
LobotSerialServoMove(8, 497, 400);
LobotSerialServoMove(9, 595, 400);
LobotSerialServoMove(10, 503, 400);
	servo_angle4(10);
	servo_angle3(70);
	servo_angle2(60);
	servo_angle1(90);
delay_ms(405);

// #1 P484 #2 P448 #3 P501 #4 P559 #5 P490 #6 P527 #7 P455 #8 P495 #9 P595 #10 P503
LobotSerialServoMove(1, 484, 400);
LobotSerialServoMove(2, 448, 400);
LobotSerialServoMove(3, 501, 400);
LobotSerialServoMove(4, 559, 400);
LobotSerialServoMove(5, 490, 400);
LobotSerialServoMove(6, 527, 400);
LobotSerialServoMove(7, 455, 400);
LobotSerialServoMove(8, 495, 400);
LobotSerialServoMove(9, 595, 400);
LobotSerialServoMove(10, 503, 400);
delay_ms(405);

// #1 P426 #2 P452 #3 P485 #4 P573 #5 P376 #6 P521 #7 P460 #8 P496 #9 P595 #10 P502
LobotSerialServoMove(1, 426, 300);
LobotSerialServoMove(2, 452, 300);
LobotSerialServoMove(3, 485, 300);
LobotSerialServoMove(4, 573, 300);
LobotSerialServoMove(5, 376, 300);
LobotSerialServoMove(6, 521, 300);
LobotSerialServoMove(7, 460, 300);
LobotSerialServoMove(8, 496, 300);
LobotSerialServoMove(9, 595, 300);
LobotSerialServoMove(10, 502, 300);
delay_ms(305);

// #1 P428 #2 P453 #3 P532 #4 P569 #5 P379 #6 P522 #7 P459 #8 P494 #9 P489 #10 P505
LobotSerialServoMove(1, 428, 300);
LobotSerialServoMove(2, 453, 300);
LobotSerialServoMove(3, 532, 300);
LobotSerialServoMove(4, 569, 300);
LobotSerialServoMove(5, 379, 300);
LobotSerialServoMove(6, 522, 300);
LobotSerialServoMove(7, 459, 300);
LobotSerialServoMove(8, 494, 300);
LobotSerialServoMove(9, 489, 300);
LobotSerialServoMove(10, 505, 300);
delay_ms(305);

// #1 P432 #2 P451 #3 P523 #4 P568 #5 P469 #6 P438 #7 P578 #8 P497 #9 P495 #10 P502
LobotSerialServoMove(1, 432, 300);
LobotSerialServoMove(2, 451, 300);
LobotSerialServoMove(3, 523, 300);
LobotSerialServoMove(4, 568, 300);
LobotSerialServoMove(5, 469, 300);
LobotSerialServoMove(6, 438, 300);
LobotSerialServoMove(7, 578, 300);
LobotSerialServoMove(8, 497, 300);
LobotSerialServoMove(9, 495, 300);
LobotSerialServoMove(10, 502, 300);
delay_ms(305);

// #1 P479 #2 P451 #3 P523 #4 P569 #5 P480 #6 P439 #7 P579 #8 P495 #9 P495 #10 P501
LobotSerialServoMove(1, 479, 300);
LobotSerialServoMove(2, 451, 300);
LobotSerialServoMove(3, 523, 300);
LobotSerialServoMove(4, 569, 300);
LobotSerialServoMove(5, 480, 300);
LobotSerialServoMove(6, 439, 300);
LobotSerialServoMove(7, 579, 300);
LobotSerialServoMove(8, 495, 300);
LobotSerialServoMove(9, 495, 300);
LobotSerialServoMove(10, 501, 300);
delay_ms(305);

// #1 P494 #2 P497 #3 P503 #4 P505 #5 P498 #6 P500 #7 P503 #8 P496 #9 P497 #10 P496
LobotSerialServoMove(1, 494, 300);
LobotSerialServoMove(2, 497, 300);
LobotSerialServoMove(3, 503, 300);
LobotSerialServoMove(4, 505, 300);
LobotSerialServoMove(5, 498, 300);
LobotSerialServoMove(6, 500, 300);
LobotSerialServoMove(7, 503, 300);
LobotSerialServoMove(8, 496, 300);
LobotSerialServoMove(9, 497, 300);
LobotSerialServoMove(10, 496, 300);
delay_ms(305);
}

void qibu(void)
{
LobotSerialServoMove(1, 430-yijian-3,500);
LobotSerialServoMove(2, 505,500);
LobotSerialServoMove(3, 530, 500);
LobotSerialServoMove(4, 460+10, 500);
LobotSerialServoMove(5, 400-20, 500);
LobotSerialServoMove(6, 535+liujia, 500);
LobotSerialServoMove(7, 480, 500);
LobotSerialServoMove(8, 506, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 500, 500);
delay_ms(505);
	
LobotSerialServoMove(1, 430-yijian-3,300);
LobotSerialServoMove(2, 505,300);
LobotSerialServoMove(3, 530, 300);
LobotSerialServoMove(4, 460+10, 300);
LobotSerialServoMove(5, 400-20, 300);
LobotSerialServoMove(6, 535+liujia, 300);
LobotSerialServoMove(7, 480, 300);
LobotSerialServoMove(8, 506, 300);
LobotSerialServoMove(9, 500, 300);
LobotSerialServoMove(10, 500, 300);
delay_ms(305);
}

void yuandiyou(void)
{
// #1 P420 #2 P505 #3 P530 #4 P460 #5 P390 #6 P535 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 420, 500);
LobotSerialServoMove(2, 505, 500);
LobotSerialServoMove(3, 530, 500);
LobotSerialServoMove(4, 460, 500);
LobotSerialServoMove(5, 390, 500);
LobotSerialServoMove(6, 535, 500);
LobotSerialServoMove(7, 480, 500);
LobotSerialServoMove(8, 506, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 500, 500);
delay_ms(505);

// #1 P430 #2 P505 #3 P530 #4 P460 #5 P420 #6 P465 #7 P480 #8 P506 #9 P500 #10 P700
LobotSerialServoMove(1, 430, 500);
LobotSerialServoMove(2, 505, 500);
LobotSerialServoMove(3, 530, 500);
LobotSerialServoMove(4, 460, 500);
LobotSerialServoMove(5, 420, 500);
LobotSerialServoMove(6, 465, 500);
LobotSerialServoMove(7, 480, 500);
LobotSerialServoMove(8, 506, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 500+ydshu, 500);
delay_ms(505);

// #1 P500 #2 P505 #3 P530 #4 P460 #5 P475 #6 P535 #7 P480 #8 P506 #9 P500 #10 P700
LobotSerialServoMove(1, 500, 500);
LobotSerialServoMove(2, 505, 500);
LobotSerialServoMove(3, 530, 500);
LobotSerialServoMove(4, 460, 500);
LobotSerialServoMove(5, 475, 500);
LobotSerialServoMove(6, 535, 500);
LobotSerialServoMove(7, 480, 500);
LobotSerialServoMove(8, 506, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 500+ydshu, 500);
delay_ms(505);

// #1 P635 #2 P505 #3 P530 #4 P460 #5 P545 #6 P535 #7 P530 #8 P506 #9 P500 #10 P700
LobotSerialServoMove(1, 635, 500);
LobotSerialServoMove(2, 505, 500);
LobotSerialServoMove(3, 530, 500);
LobotSerialServoMove(4, 460, 500);
LobotSerialServoMove(5, 545, 500);
LobotSerialServoMove(6, 535, 500);
LobotSerialServoMove(7, 530, 500);
LobotSerialServoMove(8, 506, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 500+ydshu, 500);
delay_ms(505);

// #1 P635 #2 P505 #3 P530 #4 P460 #5 P565 #6 P535 #7 P500 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 635, 700);
LobotSerialServoMove(2, 505, 700);
LobotSerialServoMove(3, 530, 700);
LobotSerialServoMove(4, 460, 700);
LobotSerialServoMove(5, 565, 700);
LobotSerialServoMove(6, 535, 700);
LobotSerialServoMove(7, 500, 700);
LobotSerialServoMove(8, 506, 700);
LobotSerialServoMove(9, 500, 700);
LobotSerialServoMove(10, 500, 700);
delay_ms(705);

// #1 P500 #2 P500 #3 P500 #4 P500 #5 P500 #6 P500 #7 P500 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 500, 500);
LobotSerialServoMove(2, 500, 500);
LobotSerialServoMove(3, 500, 500);
LobotSerialServoMove(4, 500, 500);
LobotSerialServoMove(5, 500, 500);
LobotSerialServoMove(6, 500, 500);
LobotSerialServoMove(7, 500, 500);
LobotSerialServoMove(8, 500, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 500, 500);
delay_ms(505);

}

void yuandizuo(void)
{
// #1 P610 #2 P505 #3 P530 #4 P460 #5 P560 #6 P535 #7 P440 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 610, 700);
LobotSerialServoMove(2, 505, 700);
LobotSerialServoMove(3, 530, 700);
LobotSerialServoMove(4, 460, 700);
LobotSerialServoMove(5, 560, 700);
LobotSerialServoMove(6, 535, 700);
LobotSerialServoMove(7, 440, 700);
LobotSerialServoMove(8, 506, 700);
LobotSerialServoMove(9, 500, 700);
LobotSerialServoMove(10, 500, 700);
delay_ms(705);

// #1 P610 #2 P505 #3 P530 #4 P460 #5 P560 #6 P535 #7 P480 #8 P506 #9 P300 #10 P500
LobotSerialServoMove(1, 610, 700);
LobotSerialServoMove(2, 505, 700);
LobotSerialServoMove(3, 530, 700);
LobotSerialServoMove(4, 460, 700);
LobotSerialServoMove(5, 560, 700);
LobotSerialServoMove(6, 535, 700);
LobotSerialServoMove(7, 480, 700);
LobotSerialServoMove(8, 506, 700);
LobotSerialServoMove(9, 500-ydshu, 700);
LobotSerialServoMove(10, 500, 700);
delay_ms(705);

// #1 P545 #2 P525 #3 P530 #4 P460 #5 P500 #6 P535 #7 P480 #8 P506 #9 P300 #10 P500
LobotSerialServoMove(1, 545, 700);
LobotSerialServoMove(2, 525, 700);
LobotSerialServoMove(3, 530, 700);
LobotSerialServoMove(4, 460, 700);
LobotSerialServoMove(5, 500, 700);
LobotSerialServoMove(6, 535, 700);
LobotSerialServoMove(7, 480, 700);
LobotSerialServoMove(8, 506, 700);
LobotSerialServoMove(9, 500-ydshu, 700);
LobotSerialServoMove(10, 500, 700);
delay_ms(705);

// #1 P435 #2 P525 #3 P530 #4 P460 #5 P380 #6 P535 #7 P480 #8 P506 #9 P300 #10 P500
LobotSerialServoMove(1, 435, 700);
LobotSerialServoMove(2, 525, 700);
LobotSerialServoMove(3, 530, 700);
LobotSerialServoMove(4, 490, 700);
LobotSerialServoMove(5, 380, 700);
LobotSerialServoMove(6, 535, 700);
LobotSerialServoMove(7, 480, 700);
LobotSerialServoMove(8, 506, 700);
LobotSerialServoMove(9, 500-ydshu, 700);
LobotSerialServoMove(10, 500, 700);
delay_ms(705);

// #1 P455 #2 P525 #3 P530 #4 P365 #5 P380 #6 P535 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 455, 700);
LobotSerialServoMove(2, 525, 700);
LobotSerialServoMove(3, 530, 700);
LobotSerialServoMove(4, 415, 700);
LobotSerialServoMove(5, 380, 700);
LobotSerialServoMove(6, 535, 700);
LobotSerialServoMove(7, 480, 700);
LobotSerialServoMove(8, 506, 700);
LobotSerialServoMove(9, 500, 700);
LobotSerialServoMove(10, 500, 700);
delay_ms(705);

// #1 P500 #2 P500 #3 P500 #4 P500 #5 P500 #6 P500 #7 P500 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 500, 500);
LobotSerialServoMove(2, 500, 500);
LobotSerialServoMove(3, 500, 500);
LobotSerialServoMove(4, 500, 500);
LobotSerialServoMove(5, 500, 500);
LobotSerialServoMove(6, 500, 500);
LobotSerialServoMove(7, 500, 500);
LobotSerialServoMove(8, 500, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 500, 500);
delay_ms(505);

}



void yuandizuo2(void)
{
// #1 P610 #2 P535 #3 P494 #4 P480 #5 P580 #6 P505 #7 P460 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 610, 500);
LobotSerialServoMove(2, 535, 500);
LobotSerialServoMove(3, 494, 500);
LobotSerialServoMove(4, 480, 500);
LobotSerialServoMove(5, 580, 500);
LobotSerialServoMove(6, 505, 500);
LobotSerialServoMove(7, 460, 500);
LobotSerialServoMove(8, 470, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 500, 500);
delay_ms(505);

// #1 P580 #2 P465 #3 P494 #4 P480 #5 P570 #6 P505 #7 P460 #8 P470 #9 P300 #10 P700
LobotSerialServoMove(1, 580, 500);
LobotSerialServoMove(2, 465, 500);
LobotSerialServoMove(3, 494, 500);
LobotSerialServoMove(4, 480, 500);
LobotSerialServoMove(5, 570, 500);
LobotSerialServoMove(6, 505, 500);
LobotSerialServoMove(7, 460, 500);
LobotSerialServoMove(8, 470, 500);
LobotSerialServoMove(9, 500-ydshu, 500);
LobotSerialServoMove(10, 500, 500);
delay_ms(505);

// #1 P525 #2 P535 #3 P494 #4 P480 #5 P500 #6 P505 #7 P460 #8 P470 #9 P300 #10 P700
LobotSerialServoMove(1, 525, 500);
LobotSerialServoMove(2, 535, 500);
LobotSerialServoMove(3, 494, 500);
LobotSerialServoMove(4, 480, 500);
LobotSerialServoMove(5, 500, 500);
LobotSerialServoMove(6, 505, 500);
LobotSerialServoMove(7, 460, 500);
LobotSerialServoMove(8, 470, 500);
LobotSerialServoMove(9, 500-ydshu, 500);
LobotSerialServoMove(10, 500, 500);
delay_ms(505);

// #1 P455 #2 P535 #3 P494 #4 P530 #5 P365 #6 P505 #7 P460 #8 P470 #9 P300 #10 P700
LobotSerialServoMove(1, 455, 500);
LobotSerialServoMove(2, 535, 500);
LobotSerialServoMove(3, 494, 500);
LobotSerialServoMove(4, 530, 500);
LobotSerialServoMove(5, 365, 500);
LobotSerialServoMove(6, 505, 500);
LobotSerialServoMove(7, 460, 500);
LobotSerialServoMove(8, 470, 500);
LobotSerialServoMove(9, 500-ydshu, 500);
LobotSerialServoMove(10, 500, 500);
delay_ms(505);

// #1 P435 #2 P535 #3 P494 #4 P500 #5 P365 #6 P505 #7 P460 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 435, 700);
LobotSerialServoMove(2, 535, 700);
LobotSerialServoMove(3, 494, 700);
LobotSerialServoMove(4, 500, 700);
LobotSerialServoMove(5, 365, 700);
LobotSerialServoMove(6, 505, 700);
LobotSerialServoMove(7, 460, 700);
LobotSerialServoMove(8, 470, 700);
LobotSerialServoMove(9, 500, 700);
LobotSerialServoMove(10, 500, 700);
delay_ms(705);

// #1 P500 #2 P500 #3 P500 #4 P500 #5 P500 #6 P500 #7 P500 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 500, 500);
LobotSerialServoMove(2, 500, 500);
LobotSerialServoMove(3, 500, 500);
LobotSerialServoMove(4, 500, 500);
LobotSerialServoMove(5, 500, 500);
LobotSerialServoMove(6, 500, 500);
LobotSerialServoMove(7, 500, 500);
LobotSerialServoMove(8, 500, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 500, 500);
delay_ms(505);

}

void yuezhang2(void)
{
// #1 P416 #2 P468 #3 P555 #4 P500 #5 P322 #6 P503 #7 P504 #8 P502 #9 P499 #10 P501      
LobotSerialServoMove(1, 416, 1000);
LobotSerialServoMove(2, 468, 1000);
LobotSerialServoMove(3, 555, 1000);
LobotSerialServoMove(4, 500, 1000);
LobotSerialServoMove(5, 322, 1000);
LobotSerialServoMove(6, 503, 1000);
LobotSerialServoMove(7, 504, 1000);
LobotSerialServoMove(8, 502, 1000);
LobotSerialServoMove(9, 499, 1000);
LobotSerialServoMove(10, 501, 1000);
delay_ms(1005);

// #1 P418 #2 P458 #3 P610 #4 P510 #5 P417 #6 P253 #7 P312 #8 P602 #9 P499 #10 P501      
LobotSerialServoMove(1, 418, 1000);
LobotSerialServoMove(2, 458, 1000);
LobotSerialServoMove(3, 610, 1000);
LobotSerialServoMove(4, 510, 1000);
LobotSerialServoMove(5, 417, 1000);
LobotSerialServoMove(6, 253, 1000);
LobotSerialServoMove(7, 312, 1000);
LobotSerialServoMove(8, 602, 1000);
LobotSerialServoMove(9, 499, 1000);
LobotSerialServoMove(10, 501, 1000);
delay_ms(1005);

// #1 P406 #2 P459 #3 P610 #4 P494 #5 P420 #6 P91 #7 P336 #8 P600 #9 P496 #10 P502       
LobotSerialServoMove(1, 406, 1000);
LobotSerialServoMove(2, 459, 1000);
LobotSerialServoMove(3, 610, 1000);
LobotSerialServoMove(4, 494, 1000);
LobotSerialServoMove(5, 420, 1000);
LobotSerialServoMove(6, 91, 1000);
LobotSerialServoMove(7, 336, 1000);
LobotSerialServoMove(8, 600, 1000);
LobotSerialServoMove(9, 496, 1000);
LobotSerialServoMove(10, 502, 1000);
delay_ms(1005);

// #1 P409 #2 P459 #3 P610 #4 P488 #5 P416 #6 P0 #7 P354 #8 P594 #9 P500 #10 P502        
LobotSerialServoMove(1, 409, 1000);
LobotSerialServoMove(2, 459, 1000);
LobotSerialServoMove(3, 610, 1000);
LobotSerialServoMove(4, 488, 1000);
LobotSerialServoMove(5, 416, 1000);
LobotSerialServoMove(6, 0, 1000);
LobotSerialServoMove(7, 354, 1000);
LobotSerialServoMove(8, 594, 1000);
LobotSerialServoMove(9, 500, 1000);
LobotSerialServoMove(10, 502, 1000);
delay_ms(1005);

// #1 P415 #2 P432 #3 P594 #4 P375 #5 P415 #6 P0 #7 P900 #8 P601 #9 P496 #10 P496        
LobotSerialServoMove(1, 415, 1000);
LobotSerialServoMove(2, 432, 1000);
LobotSerialServoMove(3, 594, 1000);
LobotSerialServoMove(4, 375, 1000);
LobotSerialServoMove(5, 415, 1000);
LobotSerialServoMove(6, 0, 1000);
LobotSerialServoMove(7, 900, 1000);
LobotSerialServoMove(8, 601, 1000);
LobotSerialServoMove(9, 496, 1000);
LobotSerialServoMove(10, 496, 1000);
delay_ms(1005);

// #1 P420 #2 P439 #3 P615 #4 P378 #5 P491 #6 P260 #7 P889 #8 P596 #9 P498 #10 P496      
LobotSerialServoMove(1, 420, 1000);
LobotSerialServoMove(2, 439, 1000);
LobotSerialServoMove(3, 615, 1000);
LobotSerialServoMove(4, 378, 1000);
LobotSerialServoMove(5, 491, 1000);
LobotSerialServoMove(6, 260, 1000);
LobotSerialServoMove(7, 889, 1000);
LobotSerialServoMove(8, 596, 1000);
LobotSerialServoMove(9, 498, 1000);
LobotSerialServoMove(10, 496, 1000);
delay_ms(1005);

// #1 P490 #2 P643 #3 P528 #4 P345 #5 P464 #6 P360 #7 P772 #8 P588 #9 P494 #10 P496      
LobotSerialServoMove(1, 490, 400);
LobotSerialServoMove(2, 643, 400);
LobotSerialServoMove(3, 528, 400);
LobotSerialServoMove(4, 345, 400);
LobotSerialServoMove(5, 464, 400);
LobotSerialServoMove(6, 360, 400);
LobotSerialServoMove(7, 772, 400);
LobotSerialServoMove(8, 588, 400);
LobotSerialServoMove(9, 494, 400);
LobotSerialServoMove(10, 496, 400);
delay_ms(405);

// #1 P512 #2 P480 #3 P514 #4 P388 #5 P510 #6 P397 #7 P713 #8 P585 #9 P494 #10 P494      
LobotSerialServoMove(1, 512, 1000);
LobotSerialServoMove(2, 480, 1000);
LobotSerialServoMove(3, 514, 1000);
LobotSerialServoMove(4, 388, 1000);
LobotSerialServoMove(5, 510, 1000);
LobotSerialServoMove(6, 397, 1000);
LobotSerialServoMove(7, 713, 1000);
LobotSerialServoMove(8, 585, 1000);
LobotSerialServoMove(9, 494, 1000);
LobotSerialServoMove(10, 494, 1000);
delay_ms(1005);

// #1 P546 #2 P328 #3 P515 #4 P569 #5 P537 #6 P369 #7 P812 #8 P517 #9 P494 #10 P495      
LobotSerialServoMove(1, 546, 1000);
LobotSerialServoMove(2, 328, 1000);
LobotSerialServoMove(3, 515, 1000);
LobotSerialServoMove(4, 569, 1000);
LobotSerialServoMove(5, 537, 1000);
LobotSerialServoMove(6, 369, 1000);
LobotSerialServoMove(7, 812, 1000);
LobotSerialServoMove(8, 517, 1000);
LobotSerialServoMove(9, 494, 1000);
LobotSerialServoMove(10, 495, 1000);
delay_ms(1005);

// #1 P552 #2 P334 #3 P521 #4 P573 #5 P580 #6 P438 #7 P802 #8 P551 #9 P495 #10 P489      
LobotSerialServoMove(1, 552, 1000);
LobotSerialServoMove(2, 334, 1000);
LobotSerialServoMove(3, 521, 1000);
LobotSerialServoMove(4, 573, 1000);
LobotSerialServoMove(5, 580, 1000);
LobotSerialServoMove(6, 438, 1000);
LobotSerialServoMove(7, 802, 1000);
LobotSerialServoMove(8, 551, 1000);
LobotSerialServoMove(9, 495, 1000);
LobotSerialServoMove(10, 489, 1000);
delay_ms(1005);

// #1 P545 #2 P52 #3 P190 #4 P474 #5 P580 #6 P480 #7 P802 #8 P548 #9 P495 #10 P488       
LobotSerialServoMove(1, 545, 1500);
LobotSerialServoMove(2, 52, 1500);
LobotSerialServoMove(3, 190, 1500);
LobotSerialServoMove(4, 474, 1500);
LobotSerialServoMove(5, 580, 1500);
LobotSerialServoMove(6, 480, 1500);
LobotSerialServoMove(7, 802, 1500);
LobotSerialServoMove(8, 548, 1500);
LobotSerialServoMove(9, 495, 1500);
LobotSerialServoMove(10, 488, 1500);
delay_ms(1505);

// #1 P546 #2 P56 #3 P191 #4 P479 #5 P580 #6 P485 #7 P809 #8 P546 #9 P495 #10 P489       
LobotSerialServoMove(1, 546, 1000);
LobotSerialServoMove(2, 56, 1000);
LobotSerialServoMove(3, 191, 1000);
LobotSerialServoMove(4, 479, 1000);
LobotSerialServoMove(5, 580, 1000);
LobotSerialServoMove(6, 485, 1000);
LobotSerialServoMove(7, 809, 1000);
LobotSerialServoMove(8, 546, 1000);
LobotSerialServoMove(9, 495, 1000);
LobotSerialServoMove(10, 489, 1000);
delay_ms(1005);

// #1 P546 #2 P56 #3 P208 #4 P705 #5 P575 #6 P467 #7 P678 #8 P503 #9 P496 #10 P489       
LobotSerialServoMove(1, 546, 1000);
LobotSerialServoMove(2, 56, 1000);
LobotSerialServoMove(3, 208, 1000);
LobotSerialServoMove(4, 705, 1000);
LobotSerialServoMove(5, 575, 1000);
LobotSerialServoMove(6, 467, 1000);
LobotSerialServoMove(7, 678, 1000);
LobotSerialServoMove(8, 503, 1000);
LobotSerialServoMove(9, 496, 1000);
LobotSerialServoMove(10, 489, 1000);
delay_ms(1005);

// #1 P547 #2 P57 #3 P597 #4 P704 #5 P570 #6 P476 #7 P567 #8 P505 #9 P496 #10 P489       
LobotSerialServoMove(1, 547, 1000);
LobotSerialServoMove(2, 57, 1000);
LobotSerialServoMove(3, 597, 1000);
LobotSerialServoMove(4, 704, 1000);
LobotSerialServoMove(5, 570, 1000);
LobotSerialServoMove(6, 476, 1000);
LobotSerialServoMove(7, 567, 1000);
LobotSerialServoMove(8, 505, 1000);
LobotSerialServoMove(9, 496, 1000);
LobotSerialServoMove(10, 489, 1000);
delay_ms(1005);

// #1 P543 #2 P369 #3 P650 #4 P538 #5 P570 #6 P495 #7 P574 #8 P506 #9 P496 #10 P485      
LobotSerialServoMove(1, 543, 1000);
LobotSerialServoMove(2, 369, 1000);
LobotSerialServoMove(3, 650, 1000);
LobotSerialServoMove(4, 538, 1000);
LobotSerialServoMove(5, 570, 1000);
LobotSerialServoMove(6, 495, 1000);
LobotSerialServoMove(7, 574, 1000);
LobotSerialServoMove(8, 506, 1000);
LobotSerialServoMove(9, 496, 1000);
LobotSerialServoMove(10, 485, 1000);
delay_ms(1005);

// #1 P475 #2 P366 #3 P648 #4 P539 #5 P499 #6 P480 #7 P574 #8 P508 #9 P496 #10 P488      
LobotSerialServoMove(1, 475, 1000);
LobotSerialServoMove(2, 366, 1000);
LobotSerialServoMove(3, 648, 1000);
LobotSerialServoMove(4, 539, 1000);
LobotSerialServoMove(5, 499, 1000);
LobotSerialServoMove(6, 480, 1000);
LobotSerialServoMove(7, 574, 1000);
LobotSerialServoMove(8, 508, 1000);
LobotSerialServoMove(9, 496, 1000);
LobotSerialServoMove(10, 488, 1000);
delay_ms(1005);


}

void zuozhuanzhi(void)
{
// #1 P430 #2 P505 #3 P530 #4 P460 #5 P420 #6 P535 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 430-yijian-5, zl14);
LobotSerialServoMove(2, 505, zl14);
LobotSerialServoMove(3, 530, zl14);
LobotSerialServoMove(4, 460+20, zl14);
LobotSerialServoMove(5, 420, zl14);
LobotSerialServoMove(6, 535+liujia, zl14);
LobotSerialServoMove(7, 480, zl14);
LobotSerialServoMove(8, 506, zl14);
LobotSerialServoMove(9, 500, zl14);
LobotSerialServoMove(10, 500, zl14);
//servo_angle1(85);
//servo_angle2(85);
//servo_angle3(85);
//servo_angle4(85);
delay_ms(zl14+5);

// #1 P466 #2 P515 #3 P470 #4 P500 #5 P449 #6 P380 #7 P580 #8 P425 #9 P500 #10 P500
LobotSerialServoMove(1, 466-5, zl25);
LobotSerialServoMove(2, 515, zl25);
LobotSerialServoMove(3, 470, zl25);
LobotSerialServoMove(4, 500+10+10, zl25);    //ǰ��
LobotSerialServoMove(5, 449+wujia, zl25);
LobotSerialServoMove(6, 380+erliu, zl25);
LobotSerialServoMove(7, 580, zl25);
LobotSerialServoMove(8, 425, zl25);
LobotSerialServoMove(9, 500+zzhi, zl25);
LobotSerialServoMove(10, 500, zl25);
servo_angle1(80);
servo_angle2(80);
servo_angle3(80);
servo_angle4(80);
servo_angle5(80);
delay_ms(zl25+5);

// #1 P570 #2 P490 #3 P530 #4 P470 #5 P560 #6 P383 #7 P490 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 570, zl36);
LobotSerialServoMove(2, 490, zl36);
LobotSerialServoMove(3, 530, zl36);
LobotSerialServoMove(4, 470, zl36);
LobotSerialServoMove(5, 560, zl36);
LobotSerialServoMove(6, 383, zl36);
LobotSerialServoMove(7, 490, zl36);
LobotSerialServoMove(8, 320, zl36);
LobotSerialServoMove(9, 500+zzhi, zl36);
LobotSerialServoMove(10, 500, zl36);
//servo_angle1(85);
//servo_angle2(85);
//servo_angle3(85);
//servo_angle4(85);
delay_ms(zl36+5);

// #1 P580 #2 P505 #3 P494 #4 P480 #5 P570 #6 P505 #7 P480 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 580, zl14);
LobotSerialServoMove(2, 505+40, zl14);
LobotSerialServoMove(3, 494, zl14);
LobotSerialServoMove(4, 480, zl14);
LobotSerialServoMove(5, 570+5, zl14);
LobotSerialServoMove(6, 505, zl14);   //
LobotSerialServoMove(7, 480-30, zl14);
LobotSerialServoMove(8, 470, zl14);
LobotSerialServoMove(9, 500, zl14);
LobotSerialServoMove(10, 500, zl14);
//servo_angle1(95);
//servo_angle2(95);
//servo_angle3(95);
//servo_angle4(95);
delay_ms(zl14+5);

// #1 P521 #2 P350 #3 P575 #4 P580 #5 P534 #6 P515 #7 P520 #8 P530 #9 P500 #10 P500
LobotSerialServoMove(1, 521, zl25);
LobotSerialServoMove(2, 350+40, zl25);          //
LobotSerialServoMove(3, 575, zl25);
LobotSerialServoMove(4, 580, zl25);
LobotSerialServoMove(5, 534+5, zl25);
LobotSerialServoMove(6, 515, zl25);
LobotSerialServoMove(7, 520-30, zl25);
LobotSerialServoMove(8, 530, zl25);
LobotSerialServoMove(9, 500, zl25);
LobotSerialServoMove(10, 500, zl25);
servo_angle1(100);
servo_angle2(100);
servo_angle3(100);
servo_angle4(100);
servo_angle5(100);
delay_ms(zl25+5);

// #1 P440 #2 P383 #3 P680 #4 P470 #5 P430 #6 P510 #7 P470 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 440-10, zl36);
LobotSerialServoMove(2, 383, zl36);
LobotSerialServoMove(3, 680, zl36);
LobotSerialServoMove(4, 470+15, zl36);
LobotSerialServoMove(5, 430, zl36);
LobotSerialServoMove(6, 510+liujia, zl36);
LobotSerialServoMove(7, 470, zl36);
LobotSerialServoMove(8, 470, zl36);
LobotSerialServoMove(9, 500, zl36);
LobotSerialServoMove(10, 500, zl36);
//servo_angle1(95);
//servo_angle2(95);
//servo_angle3(95);
//servo_angle4(95);
delay_ms(zl36+5);

}

void youzhuanzhi(void)
{
// #1 P430 #2 P505 #3 P530 #4 P460 #5 P420 #6 P535 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 430-yijian-7, zl14);
LobotSerialServoMove(2, 505, zl14);
LobotSerialServoMove(3, 530, zl14);
LobotSerialServoMove(4, 460+10, zl14);
LobotSerialServoMove(5, 420, zl14);
LobotSerialServoMove(6, 535+liujia, zl14);
LobotSerialServoMove(7, 480, zl14);
LobotSerialServoMove(8, 506, zl14);
LobotSerialServoMove(9, 500, zl14);
LobotSerialServoMove(10, 500, zl14);
	delay_ms(zl14+5);

// #1 P466 #2 P515 #3 P470 #4 P500 #5 P449 #6 P380 #7 P580 #8 P425 #9 P500 #10 P500
LobotSerialServoMove(1, 466-7, zl25);
LobotSerialServoMove(2, 515, zl25);
LobotSerialServoMove(3, 470, zl25);
LobotSerialServoMove(4, 500+20+10, zl25);     //ǰ��
LobotSerialServoMove(5, 449+wujia, zl25);
LobotSerialServoMove(6, 380+erliu, zl25);
LobotSerialServoMove(7, 580, zl25);
LobotSerialServoMove(8, 425, zl25);
LobotSerialServoMove(9, 500, zl25);
LobotSerialServoMove(10, 500, zl25);
servo_angle1(80);
servo_angle2(80);
servo_angle3(80);
servo_angle4(80);
servo_angle5(80);
delay_ms(zl25+5);

// #1 P570 #2 P490 #3 P530 #4 P470 #5 P560 #6 P383 #7 P490 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 570, zl36);
LobotSerialServoMove(2, 490, zl36);
LobotSerialServoMove(3, 530, zl36);
LobotSerialServoMove(4, 470, zl36);
LobotSerialServoMove(5, 560, zl36);
LobotSerialServoMove(6, 383, zl36);
LobotSerialServoMove(7, 490, zl36);
LobotSerialServoMove(8, 320, zl36);
LobotSerialServoMove(9, 500, zl36);
LobotSerialServoMove(10, 500, zl36);
delay_ms(zl36+5);

// #1 P580 #2 P505 #3 P494 #4 P480 #5 P570 #6 P505 #7 P480 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 580, zl14);
LobotSerialServoMove(2, 505+20+40, zl14);
LobotSerialServoMove(3, 494, zl14);
LobotSerialServoMove(4, 480, zl14);
LobotSerialServoMove(5, 570+5, zl14);
LobotSerialServoMove(6, 505, zl14);
LobotSerialServoMove(7, 480-30, zl14);
LobotSerialServoMove(8, 470, zl14);
LobotSerialServoMove(9, 500, zl14);
LobotSerialServoMove(10, 500, zl14);
delay_ms(zl14+5);

// #1 P521 #2 P350 #3 P575 #4 P580 #5 P534 #6 P515 #7 P520 #8 P530 #9 P500 #10 P500
LobotSerialServoMove(1, 521, zl25);
LobotSerialServoMove(2, 350+40+20, zl25);
LobotSerialServoMove(3, 575, zl25);
LobotSerialServoMove(4, 580, zl25);
LobotSerialServoMove(5, 534+5, zl25);
LobotSerialServoMove(6, 515, zl25);
LobotSerialServoMove(7, 520-30, zl25);
LobotSerialServoMove(8, 530, zl25);
LobotSerialServoMove(9, 500, zl25);
LobotSerialServoMove(10, 500-yzhi, zl25);
servo_angle1(100);
servo_angle2(100);
servo_angle3(100);
servo_angle4(100);
servo_angle5(100);
delay_ms(zl25+5);

// #1 P440 #2 P383 #3 P680 #4 P470 #5 P430 #6 P510 #7 P470 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 440-10, zl36);
LobotSerialServoMove(2, 383, zl36);
LobotSerialServoMove(3, 680, zl36);
LobotSerialServoMove(4, 470+15, zl36);
LobotSerialServoMove(5, 430, zl36);
LobotSerialServoMove(6, 510+liujia, zl36);
LobotSerialServoMove(7, 470, zl36);
LobotSerialServoMove(8, 470, zl36);
LobotSerialServoMove(9, 500, zl36);
LobotSerialServoMove(10, 500-yzhi, zl36);
delay_ms(zl36+5);

}

void guizhong2(void)
{
// #1 P500 #2 P500 #3 P500 #4 P500 #5 P500 #6 P500 #7 P500 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 500, 1000);
LobotSerialServoMove(2, 500, 1000);
LobotSerialServoMove(3, 500, 1000);
LobotSerialServoMove(4, 450, 1000);
LobotSerialServoMove(5, 500, 1000);
LobotSerialServoMove(6, 500, 1000);
LobotSerialServoMove(7, 450, 1000);
LobotSerialServoMove(8, 500, 1000);
LobotSerialServoMove(9, 500, 1000);
LobotSerialServoMove(10, 500, 1000);
servo_angle1(90);
servo_angle2(90);
servo_angle3(90);
servo_angle4(90);
servo_angle5(90);
delay_ms(1005);

}

void yuandiyouxiao(void)
{
// #1 P420 #2 P505 #3 P530 #4 P460 #5 P390 #6 P535 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 420, 500);
LobotSerialServoMove(2, 505, 500);
LobotSerialServoMove(3, 530, 500);
LobotSerialServoMove(4, 460, 500);
LobotSerialServoMove(5, 390, 500);
LobotSerialServoMove(6, 535, 500);
LobotSerialServoMove(7, 480, 500);
LobotSerialServoMove(8, 506, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 500, 500);
delay_ms(505);

// #1 P430 #2 P505 #3 P530 #4 P460 #5 P420 #6 P465 #7 P480 #8 P506 #9 P500 #10 P700
LobotSerialServoMove(1, 430, 500);
LobotSerialServoMove(2, 505, 500);
LobotSerialServoMove(3, 530, 500);
LobotSerialServoMove(4, 460, 500);
LobotSerialServoMove(5, 420, 500);
LobotSerialServoMove(6, 465, 500);
LobotSerialServoMove(7, 480, 500);
LobotSerialServoMove(8, 506, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 560, 500);
delay_ms(505);

// #1 P500 #2 P505 #3 P530 #4 P460 #5 P475 #6 P535 #7 P480 #8 P506 #9 P500 #10 P700
LobotSerialServoMove(1, 500, 500);
LobotSerialServoMove(2, 505, 500);
LobotSerialServoMove(3, 530, 500);
LobotSerialServoMove(4, 460, 500);
LobotSerialServoMove(5, 475, 500);
LobotSerialServoMove(6, 535, 500);
LobotSerialServoMove(7, 480, 500);
LobotSerialServoMove(8, 506, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 560, 500);
delay_ms(505);

// #1 P635 #2 P505 #3 P530 #4 P460 #5 P545 #6 P535 #7 P530 #8 P506 #9 P500 #10 P700
LobotSerialServoMove(1, 635, 500);
LobotSerialServoMove(2, 505, 500);
LobotSerialServoMove(3, 530, 500);
LobotSerialServoMove(4, 460, 500);
LobotSerialServoMove(5, 545, 500);
LobotSerialServoMove(6, 535, 500);
LobotSerialServoMove(7, 530, 500);
LobotSerialServoMove(8, 506, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 560, 500);
delay_ms(505);

// #1 P635 #2 P505 #3 P530 #4 P460 #5 P565 #6 P535 #7 P500 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 635, 700);
LobotSerialServoMove(2, 505, 700);
LobotSerialServoMove(3, 530, 700);
LobotSerialServoMove(4, 460, 700);
LobotSerialServoMove(5, 565, 700);
LobotSerialServoMove(6, 535, 700);
LobotSerialServoMove(7, 500, 700);
LobotSerialServoMove(8, 506, 700);
LobotSerialServoMove(9, 500, 700);
LobotSerialServoMove(10, 500, 700);
delay_ms(705);

// #1 P500 #2 P500 #3 P500 #4 P500 #5 P500 #6 P500 #7 P500 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 500, 500);
LobotSerialServoMove(2, 500, 500);
LobotSerialServoMove(3, 500, 500);
LobotSerialServoMove(4, 500, 500);
LobotSerialServoMove(5, 500, 500);
LobotSerialServoMove(6, 500, 500);
LobotSerialServoMove(7, 500, 500);
LobotSerialServoMove(8, 500, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 500, 500);
delay_ms(505);

}

void yuandizuoxiao(void)
{
// #1 P610 #2 P535 #3 P494 #4 P480 #5 P580 #6 P505 #7 P460 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 610, 500);
LobotSerialServoMove(2, 535, 500);
LobotSerialServoMove(3, 494, 500);
LobotSerialServoMove(4, 480, 500);
LobotSerialServoMove(5, 580, 500);
LobotSerialServoMove(6, 505, 500);
LobotSerialServoMove(7, 460, 500);
LobotSerialServoMove(8, 470, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 500, 500);
delay_ms(505);

// #1 P580 #2 P465 #3 P494 #4 P480 #5 P570 #6 P505 #7 P460 #8 P470 #9 P300 #10 P700
LobotSerialServoMove(1, 580, 500);
LobotSerialServoMove(2, 465, 500);
LobotSerialServoMove(3, 494, 500);
LobotSerialServoMove(4, 480, 500);
LobotSerialServoMove(5, 570, 500);
LobotSerialServoMove(6, 505, 500);
LobotSerialServoMove(7, 460, 500);
LobotSerialServoMove(8, 470, 500);
LobotSerialServoMove(9, 440, 500);
LobotSerialServoMove(10, 500, 500);
delay_ms(505);

// #1 P525 #2 P535 #3 P494 #4 P480 #5 P500 #6 P505 #7 P460 #8 P470 #9 P300 #10 P700
LobotSerialServoMove(1, 525, 500);
LobotSerialServoMove(2, 535, 500);
LobotSerialServoMove(3, 494, 500);
LobotSerialServoMove(4, 480, 500);
LobotSerialServoMove(5, 500, 500);
LobotSerialServoMove(6, 505, 500);
LobotSerialServoMove(7, 460, 500);
LobotSerialServoMove(8, 470, 500);
LobotSerialServoMove(9, 440, 500);
LobotSerialServoMove(10, 500, 500);
delay_ms(505);

// #1 P455 #2 P535 #3 P494 #4 P530 #5 P365 #6 P505 #7 P460 #8 P470 #9 P300 #10 P700
LobotSerialServoMove(1, 455, 500);
LobotSerialServoMove(2, 535, 500);
LobotSerialServoMove(3, 494, 500);
LobotSerialServoMove(4, 530, 500);
LobotSerialServoMove(5, 365, 500);
LobotSerialServoMove(6, 505, 500);
LobotSerialServoMove(7, 460, 500);
LobotSerialServoMove(8, 470, 500);
LobotSerialServoMove(9, 440, 500);
LobotSerialServoMove(10, 500, 500);
delay_ms(505);

// #1 P435 #2 P535 #3 P494 #4 P500 #5 P365 #6 P505 #7 P460 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 435, 700);
LobotSerialServoMove(2, 535, 700);
LobotSerialServoMove(3, 494, 700);
LobotSerialServoMove(4, 500, 700);
LobotSerialServoMove(5, 365, 700);
LobotSerialServoMove(6, 505, 700);
LobotSerialServoMove(7, 460, 700);
LobotSerialServoMove(8, 470, 700);
LobotSerialServoMove(9, 500, 700);
LobotSerialServoMove(10, 500, 700);
delay_ms(705);

// #1 P500 #2 P500 #3 P500 #4 P500 #5 P500 #6 P500 #7 P500 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 500, 500);
LobotSerialServoMove(2, 500, 500);
LobotSerialServoMove(3, 500, 500);
LobotSerialServoMove(4, 500, 500);
LobotSerialServoMove(5, 500, 500);
LobotSerialServoMove(6, 500, 500);
LobotSerialServoMove(7, 500, 500);
LobotSerialServoMove(8, 500, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 500, 500);
delay_ms(505);

}

void guizhong3(void)
{
// #1 P500 #2 P500 #3 P500 #4 P500 #5 P500 #6 P500 #7 P500 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 500, 500);
LobotSerialServoMove(2, 500, 500);
LobotSerialServoMove(3, 500, 500);
LobotSerialServoMove(4, 450, 500);
LobotSerialServoMove(5, 500, 500);
LobotSerialServoMove(6, 500, 500);
LobotSerialServoMove(7, 450, 500);
LobotSerialServoMove(8, 500, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 500, 500);
servo_angle1(90);
servo_angle2(90);
servo_angle3(90);
servo_angle4(90);
servo_angle5(90);
delay_ms(505);

}



void zouluend(void)
{
// #1 P500 #2 P500 #3 P500 #4 P500 #5 P500 #6 P500 #7 P500 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 440-13, 50);
LobotSerialServoMove(2, 383, 50);
LobotSerialServoMove(3, 680, 50);
LobotSerialServoMove(4, 470+15, 50);
LobotSerialServoMove(5, 430-15, 50);
LobotSerialServoMove(6, 510+liujia, 50);
LobotSerialServoMove(7, 470, 50);
LobotSerialServoMove(8, 470, 50);
LobotSerialServoMove(9, 500, 50);
LobotSerialServoMove(10, 500, 50);
//servo_angle1(95);
//servo_angle2(95);
//servo_angle3(95);
//servo_angle4(95);
delay_ms(50+5);

}

void zuozhuanend(void)
{
// #1 P500 #2 P500 #3 P500 #4 P500 #5 P500 #6 P500 #7 P500 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 440-13, 50);
LobotSerialServoMove(2, 383, 50);
LobotSerialServoMove(3, 680, 50);
LobotSerialServoMove(4, 470+15, 50);
LobotSerialServoMove(5, 430-15, 50);
LobotSerialServoMove(6, 510+liujia, 50);
LobotSerialServoMove(7, 470, 50);
LobotSerialServoMove(8, 470, 50);
LobotSerialServoMove(9, 500, 50);
LobotSerialServoMove(10, 500, 50);
//servo_angle1(95);
//servo_angle2(95);
//servo_angle3(95);
//servo_angle4(95);
delay_ms(50+5);

}

void youzhuanend(void)
{
// #1 P500 #2 P500 #3 P500 #4 P500 #5 P500 #6 P500 #7 P500 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 440-13, 50);
LobotSerialServoMove(2, 383, 50);
LobotSerialServoMove(3, 680, 50);
LobotSerialServoMove(4, 470+15, 50);
LobotSerialServoMove(5, 430-15, 50);
LobotSerialServoMove(6, 510+liujia, 50);
LobotSerialServoMove(7, 470, 50);
LobotSerialServoMove(8, 470, 50);
LobotSerialServoMove(9, 500, 50);
LobotSerialServoMove(10, 500, 50);
//servo_angle1(95);
//servo_angle2(95);
//servo_angle3(95);
//servo_angle4(95);
delay_ms(50+5);

}

void ceshi(void)
{
LobotSerialServoMove(1, 421+10, zl14-ceshijian);
LobotSerialServoMove(2, 505, zl14-ceshijian);
LobotSerialServoMove(3, 510, zl14-ceshijian);
LobotSerialServoMove(4, 500, zl14-ceshijian);
LobotSerialServoMove(5, 420+10, zl14-ceshijian);
LobotSerialServoMove(6, 550, zl14-ceshijian);
LobotSerialServoMove(7, 500, zl14-ceshijian);
LobotSerialServoMove(8, 526, zl14-ceshijian);
LobotSerialServoMove(9, 500, zl14-ceshijian);
//LobotSerialServoMove(10, 500, zl14);`
//servo_angle1(85);
//servo_angle2(85);
//servo_angle3(85);
//servo_angle4(85);
LobotSerialServoMove(10, 500, zl14-ceshijian);
delay_ms(zl14+5-ceshijian);

// #1 P466 #2 P515 #3 P470 #4 P500 #5 P449 #6 P380 #7 P580 #8 P425 #9 P500 #10 P500
LobotSerialServoMove(1, 451+10, zl25-ceshijian);
LobotSerialServoMove(2, 515, zl25-ceshijian);
LobotSerialServoMove(3, 490, zl25-ceshijian);
LobotSerialServoMove(4, 500, zl25-ceshijian);      //ǰ��
LobotSerialServoMove(5, 459+10, zl25-ceshijian);
LobotSerialServoMove(6, 400, zl25-ceshijian);
LobotSerialServoMove(7, 500, zl25-ceshijian);
LobotSerialServoMove(8, 345, zl25-ceshijian);
LobotSerialServoMove(9, 500, zl25-ceshijian);
LobotSerialServoMove(10, 500, zl25-ceshijian);
servo_angle1(80);
servo_angle2(80);
servo_angle3(80);
servo_angle4(80);
servo_angle5(80);
delay_ms(zl25+5-ceshijian);

// #1 P570 #2 P490 #3 P530 #4 P470 #5 P560 #6 P383 #7 P490 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 570, zl36-ceshijian);
LobotSerialServoMove(2, 490, zl36-ceshijian);
LobotSerialServoMove(3, 500, zl36-ceshijian);
LobotSerialServoMove(4, 500, zl36-ceshijian);
LobotSerialServoMove(5, 560, zl36-ceshijian);
LobotSerialServoMove(6, 383, zl36-ceshijian);
LobotSerialServoMove(7, 500, zl36-ceshijian);
LobotSerialServoMove(8, 330, zl36-ceshijian);
LobotSerialServoMove(9, 500, zl36-ceshijian);
LobotSerialServoMove(10, 500, zl36-ceshijian);
//servo_angle1(85);
//servo_angle2(85);
//servo_angle3(85);
//servo_angle4(85);
delay_ms(zl36+5-ceshijian);

// #1 P580 #2 P505 #3 P494 #4 P480 #5 P570 #6 P505 #7 P480 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 580-10, zl14-ceshijian);
LobotSerialServoMove(2, 545, zl14-ceshijian);
LobotSerialServoMove(3, 474, zl14-ceshijian);
LobotSerialServoMove(4, 500, zl14-ceshijian);
LobotSerialServoMove(5, 570-10, zl14-ceshijian);
LobotSerialServoMove(6, 505, zl14-ceshijian);
LobotSerialServoMove(7, 500, zl14-ceshijian);
LobotSerialServoMove(8, 520, zl14-ceshijian);
LobotSerialServoMove(9, 500, zl14-ceshijian);
LobotSerialServoMove(10, 500, zl14-ceshijian);
//servo_angle1(95);
//servo_angle2(95);
//servo_angle3(95);
//servo_angle4(95);
delay_ms(zl14+5-ceshijian);

// #1 P521 #2 P350 #3 P575 #4 P580 #5 P534 #6 P515 #7 P520 #8 P530 #9 P500 #10 P500
LobotSerialServoMove(1, 521-10, zl25-ceshijian);
LobotSerialServoMove(2, 390+20, zl25-ceshijian);
LobotSerialServoMove(3, 655, zl25-ceshijian);
LobotSerialServoMove(4, 500, zl25-ceshijian);
LobotSerialServoMove(5, 539-10, zl25-ceshijian);
LobotSerialServoMove(6, 515, zl25-ceshijian);
LobotSerialServoMove(7, 500, zl25-ceshijian);
LobotSerialServoMove(8, 540, zl25-ceshijian);
LobotSerialServoMove(9, 500, zl25-ceshijian);
LobotSerialServoMove(10, 500, zl25-ceshijian);
servo_angle1(100);
servo_angle2(100);
servo_angle3(100);
servo_angle4(100);
servo_angle5(100);
delay_ms(zl25+5-ceshijian);

// #1 P440 #2 P383 #3 P680 #4 P470 #5 P430 #6 P510 #7 P470 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 425, zl36-20-ceshijian);
LobotSerialServoMove(2, 383, zl36-20-ceshijian);
LobotSerialServoMove(3, 660, zl36-20-ceshijian);
LobotSerialServoMove(4, 500, zl36-20-ceshijian);
LobotSerialServoMove(5, 425, zl36-20-ceshijian);
LobotSerialServoMove(6, 525, zl36-20-ceshijian);
LobotSerialServoMove(7, 500, zl36-20-ceshijian);
LobotSerialServoMove(8, 500, zl36-20-ceshijian);
LobotSerialServoMove(9, 500, zl36-20-ceshijian);
LobotSerialServoMove(10, 500, zl36-20-ceshijian);
//servo_angle1(95);
//servo_angle2(95);
//servo_angle3(95);
//servo_angle4(95);
delay_ms(zl36+5-20-ceshijian);
}

void ceshizuo(void)
{
LobotSerialServoMove(1, 421+10, zl14-ceshijian);
LobotSerialServoMove(2, 505, zl14-ceshijian);
LobotSerialServoMove(3, 510, zl14-ceshijian);
LobotSerialServoMove(4, 500, zl14-ceshijian);
LobotSerialServoMove(5, 420+10, zl14-ceshijian);
LobotSerialServoMove(6, 550, zl14-ceshijian);
LobotSerialServoMove(7, 500, zl14-ceshijian);
LobotSerialServoMove(8, 526, zl14-ceshijian);
LobotSerialServoMove(9, 500, zl14-ceshijian);
//LobotSerialServoMove(10, 500, zl14);`
//servo_angle1(85);
//servo_angle2(85);
//servo_angle3(85);
//servo_angle4(85);
LobotSerialServoMove(10, 500, zl14-ceshijian);
delay_ms(zl14+5-ceshijian);

// #1 P466 #2 P515 #3 P470 #4 P500 #5 P449 #6 P380 #7 P580 #8 P425 #9 P500 #10 P500
LobotSerialServoMove(1, 451+10, zl25-ceshijian);
LobotSerialServoMove(2, 515, zl25-ceshijian);
LobotSerialServoMove(3, 490, zl25-ceshijian);
LobotSerialServoMove(4, 500, zl25-ceshijian);      //ǰ��
LobotSerialServoMove(5, 459+10, zl25-ceshijian);
LobotSerialServoMove(6, 400, zl25-ceshijian);
LobotSerialServoMove(7, 500, zl25-ceshijian);
LobotSerialServoMove(8, 345, zl25-ceshijian);
LobotSerialServoMove(9, 500+20, zl25-ceshijian);
LobotSerialServoMove(10, 500, zl25-ceshijian);
servo_angle1(80);
servo_angle2(80);
servo_angle3(80);
servo_angle4(80);
servo_angle5(80);
delay_ms(zl25+5-ceshijian);

// #1 P570 #2 P490 #3 P530 #4 P470 #5 P560 #6 P383 #7 P490 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 570, zl36-ceshijian);
LobotSerialServoMove(2, 490, zl36-ceshijian);
LobotSerialServoMove(3, 500, zl36-ceshijian);
LobotSerialServoMove(4, 500, zl36-ceshijian);
LobotSerialServoMove(5, 560, zl36-ceshijian);
LobotSerialServoMove(6, 383, zl36-ceshijian);
LobotSerialServoMove(7, 500, zl36-ceshijian);
LobotSerialServoMove(8, 330, zl36-ceshijian);
LobotSerialServoMove(9, 500+20, zl36-ceshijian);
LobotSerialServoMove(10, 500, zl36-ceshijian);
//servo_angle1(85);
//servo_angle2(85);
//servo_angle3(85);
//servo_angle4(85);
delay_ms(zl36+5-ceshijian);

// #1 P580 #2 P505 #3 P494 #4 P480 #5 P570 #6 P505 #7 P480 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 580-10, zl14-ceshijian);
LobotSerialServoMove(2, 545, zl14-ceshijian);
LobotSerialServoMove(3, 474, zl14-ceshijian);
LobotSerialServoMove(4, 500, zl14-ceshijian);
LobotSerialServoMove(5, 570-10, zl14-ceshijian);
LobotSerialServoMove(6, 505, zl14-ceshijian);
LobotSerialServoMove(7, 500, zl14-ceshijian);
LobotSerialServoMove(8, 520, zl14-ceshijian);
LobotSerialServoMove(9, 500, zl14-ceshijian);
LobotSerialServoMove(10, 500, zl14-ceshijian);
//servo_angle1(95);
//servo_angle2(95);
//servo_angle3(95);
//servo_angle4(95);
delay_ms(zl14+5-ceshijian);

// #1 P521 #2 P350 #3 P575 #4 P580 #5 P534 #6 P515 #7 P520 #8 P530 #9 P500 #10 P500
LobotSerialServoMove(1, 521-10, zl25-ceshijian);
LobotSerialServoMove(2, 390+20, zl25-ceshijian);
LobotSerialServoMove(3, 655, zl25-ceshijian);
LobotSerialServoMove(4, 500, zl25-ceshijian);
LobotSerialServoMove(5, 539-10, zl25-ceshijian);
LobotSerialServoMove(6, 515, zl25-ceshijian);
LobotSerialServoMove(7, 500, zl25-ceshijian);
LobotSerialServoMove(8, 540, zl25-ceshijian);
LobotSerialServoMove(9, 500, zl25-ceshijian);
LobotSerialServoMove(10, 500, zl25-ceshijian);
servo_angle1(100);
servo_angle2(100);
servo_angle3(100);
servo_angle4(100);
servo_angle5(100);
delay_ms(zl25+5-ceshijian);

// #1 P440 #2 P383 #3 P680 #4 P470 #5 P430 #6 P510 #7 P470 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 425, zl36-20-ceshijian);
LobotSerialServoMove(2, 383, zl36-20-ceshijian);
LobotSerialServoMove(3, 660, zl36-20-ceshijian);
LobotSerialServoMove(4, 500, zl36-20-ceshijian);
LobotSerialServoMove(5, 425, zl36-20-ceshijian);
LobotSerialServoMove(6, 525, zl36-20-ceshijian);
LobotSerialServoMove(7, 500, zl36-20-ceshijian);
LobotSerialServoMove(8, 500, zl36-20-ceshijian);
LobotSerialServoMove(9, 500, zl36-20-ceshijian);
LobotSerialServoMove(10, 500, zl36-20-ceshijian);
//servo_angle1(95);
//servo_angle2(95);
//servo_angle3(95);
//servo_angle4(95);
delay_ms(zl36+5-20-ceshijian);
}

void one_step_stright(void)
{
// #1 P500 #2 P500 #3 P500 #4 P500 #5 P500 #6 P500 #7 P500 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 500, 400);
LobotSerialServoMove(2, 500, 400);
LobotSerialServoMove(3, 500, 400);
LobotSerialServoMove(4, 500, 400);
LobotSerialServoMove(5, 500, 400);
LobotSerialServoMove(6, 500, 400);
LobotSerialServoMove(7, 500, 400);
LobotSerialServoMove(8, 500, 400);
LobotSerialServoMove(9, 500, 400);
LobotSerialServoMove(10, 500, 400);
delay_ms(405);

// #1 P420 #2 P466 #3 P494 #4 P531 #5 P369 #6 P497 #7 P491 #8 P495 #9 P500 #10 P493
LobotSerialServoMove(1, 420, 400);
LobotSerialServoMove(2, 466, 400);
LobotSerialServoMove(3, 494, 400);
LobotSerialServoMove(4, 531, 400);
LobotSerialServoMove(5, 369, 400);
LobotSerialServoMove(6, 497, 400);
LobotSerialServoMove(7, 491, 400);
LobotSerialServoMove(8, 495, 400);
LobotSerialServoMove(9, 500, 400);
LobotSerialServoMove(10, 493, 400);
delay_ms(405);

// #1 P420 #2 P441 #3 P496 #4 P535 #5 P436 #6 P397 #7 P574 #8 P495 #9 P502 #10 P493
LobotSerialServoMove(1, 420, 400);
LobotSerialServoMove(2, 441, 400);
LobotSerialServoMove(3, 496, 400);
LobotSerialServoMove(4, 535, 400);
LobotSerialServoMove(5, 436, 400);
LobotSerialServoMove(6, 397, 400);
LobotSerialServoMove(7, 574, 400);
LobotSerialServoMove(8, 495, 400);
LobotSerialServoMove(9, 502, 400);
LobotSerialServoMove(10, 493, 400);
delay_ms(405);

// #1 P486 #2 P500 #3 P441 #4 P532 #5 P484 #6 P429 #7 P537 #8 P495 #9 P502 #10 P496
LobotSerialServoMove(1, 486, 600);
LobotSerialServoMove(2, 500, 600);
LobotSerialServoMove(3, 441, 600);
LobotSerialServoMove(4, 532, 600);
LobotSerialServoMove(5, 484, 600);
LobotSerialServoMove(6, 429, 600);
LobotSerialServoMove(7, 537, 600);
LobotSerialServoMove(8, 495, 600);
LobotSerialServoMove(9, 502, 600);
LobotSerialServoMove(10, 496, 600);
delay_ms(605);

// #1 P640 #2 P500 #3 P442 #4 P531 #5 P555 #6 P439 #7 P540 #8 P450 #9 P500 #10 P496
LobotSerialServoMove(1, 640, 400);
LobotSerialServoMove(2, 500, 400);
LobotSerialServoMove(3, 442, 400);
LobotSerialServoMove(4, 531, 400);
LobotSerialServoMove(5, 555, 400);
LobotSerialServoMove(6, 439, 400);
LobotSerialServoMove(7, 540, 400);
LobotSerialServoMove(8, 450, 400);
LobotSerialServoMove(9, 500, 400);
LobotSerialServoMove(10, 496, 400);
delay_ms(405);

// #1 P554 #2 P500 #3 P468 #4 P530 #5 P571 #6 P439 #7 P537 #8 P445 #9 P502 #10 P496
LobotSerialServoMove(1, 554, 400);
LobotSerialServoMove(2, 500, 400);
LobotSerialServoMove(3, 468, 400);
LobotSerialServoMove(4, 530, 400);
LobotSerialServoMove(5, 571, 400);
LobotSerialServoMove(6, 439, 400);
LobotSerialServoMove(7, 537, 400);
LobotSerialServoMove(8, 445, 400);
LobotSerialServoMove(9, 502, 400);
LobotSerialServoMove(10, 496, 400);
delay_ms(405);

// #1 P549 #2 P494 #3 P467 #4 P586 #5 P570 #6 P442 #7 P532 #8 P447 #9 P502 #10 P495
LobotSerialServoMove(1, 549, 400);
LobotSerialServoMove(2, 494, 400);
LobotSerialServoMove(3, 467, 400);
LobotSerialServoMove(4, 586, 400);
LobotSerialServoMove(5, 570, 400);
LobotSerialServoMove(6, 442, 400);
LobotSerialServoMove(7, 532, 400);
LobotSerialServoMove(8, 447, 400);
LobotSerialServoMove(9, 502, 400);
LobotSerialServoMove(10, 495, 400);
delay_ms(405);

// #1 P496 #2 P451 #3 P527 #4 P505 #5 P502 #6 P436 #7 P478 #8 P449 #9 P500 #10 P496
LobotSerialServoMove(1, 496, 800);
LobotSerialServoMove(2, 451, 800);
LobotSerialServoMove(3, 527, 800);
LobotSerialServoMove(4, 505, 800);
LobotSerialServoMove(5, 502, 800);
LobotSerialServoMove(6, 436, 800);
LobotSerialServoMove(7, 478, 800);
LobotSerialServoMove(8, 449, 800);
LobotSerialServoMove(9, 500, 800);
LobotSerialServoMove(10, 496, 800);
delay_ms(805);

// #1 P500 #2 P500 #3 P500 #4 P500 #5 P500 #6 P500 #7 P500 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 500, 400);
LobotSerialServoMove(2, 500, 400);
LobotSerialServoMove(3, 500, 400);
LobotSerialServoMove(4, 500, 400);
LobotSerialServoMove(5, 500, 400);
LobotSerialServoMove(6, 500, 400);
LobotSerialServoMove(7, 500, 400);
LobotSerialServoMove(8, 500, 400);
LobotSerialServoMove(9, 500, 400);
LobotSerialServoMove(10, 500, 400);
delay_ms(405);

}

