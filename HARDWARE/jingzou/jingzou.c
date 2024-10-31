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
#define yijian 0   //第一步1号
#define wujia 10   //第二步5号
#define liujia 15  //第一步6号
#define zouluzuo 20
#define erliu 20
//第一秎liu4    -20

#define ydshu 130
#define ceshijian 50
void zoulu(void) //1031 
{
// #1 P500 #2 P500 #3 P502 #4 P502 #5 P498 #6 P502 #7 P540 #8 P425 #9 P388 #10 P525
LobotSerialServoMove(1, 500, 200);
LobotSerialServoMove(2, 500, 200);
LobotSerialServoMove(3, 502, 200);
LobotSerialServoMove(4, 502, 200);
LobotSerialServoMove(5, 498, 200);
LobotSerialServoMove(6, 502, 200);
LobotSerialServoMove(7, 540, 200);
LobotSerialServoMove(8, 425, 200);
LobotSerialServoMove(9, 388, 200);
LobotSerialServoMove(10, 525, 200);
delay_ms(205);

// #1 P490 #2 P500 #3 P545 #4 P440 #5 P498 #6 P498 #7 P501 #8 P429 #9 P445 #10 P557
LobotSerialServoMove(1, 490, 125);
LobotSerialServoMove(2, 500, 125);
LobotSerialServoMove(3, 545, 125);
LobotSerialServoMove(4, 440, 125);
LobotSerialServoMove(5, 498, 125);
LobotSerialServoMove(6, 498, 125);
LobotSerialServoMove(7, 501, 125);
LobotSerialServoMove(8, 429, 125);
LobotSerialServoMove(9, 445, 125);
LobotSerialServoMove(10, 557, 125);
delay_ms(130);

// #1 P490 #2 P480 #3 P502 #4 P395 #5 P498 #6 P498 #7 P490 #8 P450 #9 P445 #10 P557
LobotSerialServoMove(1, 490, 50);
LobotSerialServoMove(2, 480, 50);
LobotSerialServoMove(3, 502, 50);
LobotSerialServoMove(4, 395, 50);
LobotSerialServoMove(5, 498, 50);
LobotSerialServoMove(6, 498, 50);
LobotSerialServoMove(7, 490, 50);
LobotSerialServoMove(8, 450, 50);
LobotSerialServoMove(9, 445, 50);
LobotSerialServoMove(10, 557, 50);
delay_ms(55);

// #1 P500 #2 P480 #3 P503 #4 P424 #5 P496 #6 P499 #7 P501 #8 P495 #9 P498 #10 P558
LobotSerialServoMove(1, 500, 100);
LobotSerialServoMove(2, 480, 100);
LobotSerialServoMove(3, 503, 100);
LobotSerialServoMove(4, 424, 100);
LobotSerialServoMove(5, 496, 100);
LobotSerialServoMove(6, 499, 100);
LobotSerialServoMove(7, 501, 100);
LobotSerialServoMove(8, 495, 100);
LobotSerialServoMove(9, 498, 100);
LobotSerialServoMove(10, 558, 100);
delay_ms(105);

// #1 P500 #2 P490 #3 P503 #4 P424 #5 P496 #6 P499 #7 P525 #8 P670 #9 P590 #10 P605
LobotSerialServoMove(1, 500, 200);
LobotSerialServoMove(2, 490, 200);
LobotSerialServoMove(3, 503, 200);
LobotSerialServoMove(4, 424, 200);
LobotSerialServoMove(5, 496, 200);
LobotSerialServoMove(6, 499, 200);
LobotSerialServoMove(7, 525, 200);
LobotSerialServoMove(8, 670, 200);
LobotSerialServoMove(9, 590, 200);
LobotSerialServoMove(10, 605, 200);
delay_ms(205);

// #1 P500 #2 P500 #3 P475 #4 P556 #5 P499 #6 P501 #7 P544 #8 P566 #9 P600 #10 P470
LobotSerialServoMove(1, 500, 125);
LobotSerialServoMove(2, 500, 125);
LobotSerialServoMove(3, 475, 125);
LobotSerialServoMove(4, 556, 125);
LobotSerialServoMove(5, 499, 125);
LobotSerialServoMove(6, 501, 125);
LobotSerialServoMove(7, 544, 125);
LobotSerialServoMove(8, 566, 125);
LobotSerialServoMove(9, 600, 125);
LobotSerialServoMove(10, 470, 125);
delay_ms(130);

// #1 P500 #2 P500 #3 P475 #4 P556 #5 P499 #6 P501 #7 P544 #8 P566 #9 P540 #10 P490
LobotSerialServoMove(1, 500, 50);
LobotSerialServoMove(2, 500, 50);
LobotSerialServoMove(3, 475, 50);
LobotSerialServoMove(4, 556, 50);
LobotSerialServoMove(5, 499, 50);
LobotSerialServoMove(6, 501, 50);
LobotSerialServoMove(7, 544, 50);
LobotSerialServoMove(8, 566, 50);
LobotSerialServoMove(9, 540, 50);
LobotSerialServoMove(10, 490, 50);
delay_ms(55);

// #1 P500 #2 P500 #3 P504 #4 P556 #5 P456 #6 P502 #7 P577 #8 P513 #9 P532 #10 P475
LobotSerialServoMove(1, 500, 100);
LobotSerialServoMove(2, 500, 100);
LobotSerialServoMove(3, 504, 100);
LobotSerialServoMove(4, 556, 100);
LobotSerialServoMove(5, 456, 100);
LobotSerialServoMove(6, 502, 100);
LobotSerialServoMove(7, 577, 100);
LobotSerialServoMove(8, 513, 100);
LobotSerialServoMove(9, 532, 100);
LobotSerialServoMove(10, 475, 100);
delay_ms(105);

}
void left(void)
{
////////////////////////////// #1 P494 #2 P502 #3 P502 #4 P501 #5 P499 #6 P503 #7 P499 #8 P403 #9 P385 #10 P501
////////////////////////////LobotSerialServoMove(1, 494, 300);
////////////////////////////LobotSerialServoMove(2, 502, 300);
////////////////////////////LobotSerialServoMove(3, 502, 300);
////////////////////////////LobotSerialServoMove(4, 501, 300);
////////////////////////////LobotSerialServoMove(5, 499, 300);
////////////////////////////LobotSerialServoMove(6, 503, 300);
////////////////////////////LobotSerialServoMove(7, 499, 300);
////////////////////////////LobotSerialServoMove(8, 403, 300);
////////////////////////////LobotSerialServoMove(9, 385, 300);
////////////////////////////LobotSerialServoMove(10, 501, 300);
////////////////////////////delay_ms(305);

////////////////////////////// #1 P494 #2 P567 #3 P642 #4 P488 #5 P499 #6 P502 #7 P424 #8 P404 #9 P488 #10 P501
////////////////////////////LobotSerialServoMove(1, 494, 200);
////////////////////////////LobotSerialServoMove(2, 567, 200);
////////////////////////////LobotSerialServoMove(3, 642, 200);
////////////////////////////LobotSerialServoMove(4, 488, 200);
////////////////////////////LobotSerialServoMove(5, 499, 200);
////////////////////////////LobotSerialServoMove(6, 502, 200);
////////////////////////////LobotSerialServoMove(7, 424, 200);
////////////////////////////LobotSerialServoMove(8, 404, 200);
////////////////////////////LobotSerialServoMove(9, 488, 200);
////////////////////////////LobotSerialServoMove(10, 501, 200);
////////////////////////////delay_ms(205);

////////////////////////////// #1 P527 #2 P566 #3 P633 #4 P556 #5 P476 #6 P502 #7 P505 #8 P487 #9 P520 #10 P501
////////////////////////////LobotSerialServoMove(1, 527, 200);
////////////////////////////LobotSerialServoMove(2, 566, 200);
////////////////////////////LobotSerialServoMove(3, 633, 200);
////////////////////////////LobotSerialServoMove(4, 556, 200);
////////////////////////////LobotSerialServoMove(5, 476, 200);
////////////////////////////LobotSerialServoMove(6, 502, 200);
////////////////////////////LobotSerialServoMove(7, 505, 200);
////////////////////////////LobotSerialServoMove(8, 487, 200);
////////////////////////////LobotSerialServoMove(9, 520, 200);
////////////////////////////LobotSerialServoMove(10, 501, 200);
////////////////////////////delay_ms(205);

////////////////////////////// #1 P485 #2 P478 #3 P568 #4 P561 #5 P472 #6 P502 #7 P498 #8 P621 #9 P583 #10 P497
////////////////////////////LobotSerialServoMove(1, 485, 400);
////////////////////////////LobotSerialServoMove(2, 478, 400);
////////////////////////////LobotSerialServoMove(3, 568, 400);
////////////////////////////LobotSerialServoMove(4, 561, 400);
////////////////////////////LobotSerialServoMove(5, 472, 400);
////////////////////////////LobotSerialServoMove(6, 502, 400);
////////////////////////////LobotSerialServoMove(7, 498, 400);
////////////////////////////LobotSerialServoMove(8, 621, 400);
////////////////////////////LobotSerialServoMove(9, 583, 400);
////////////////////////////LobotSerialServoMove(10, 497, 400);
////////////////////////////delay_ms(405);

////////////////////////////// #1 P493 #2 P499 #3 P508 #4 P500 #5 P500 #6 P502 #7 P493 #8 P501 #9 P504 #10 P499
////////////////////////////LobotSerialServoMove(1, 493, 150);
////////////////////////////LobotSerialServoMove(2, 499, 150);
////////////////////////////LobotSerialServoMove(3, 508, 150);
////////////////////////////LobotSerialServoMove(4, 500, 150);
////////////////////////////LobotSerialServoMove(5, 500, 150);
////////////////////////////LobotSerialServoMove(6, 502, 150);
////////////////////////////LobotSerialServoMove(7, 493, 150);
////////////////////////////LobotSerialServoMove(8, 501, 150);
////////////////////////////LobotSerialServoMove(9, 504, 150);
////////////////////////////LobotSerialServoMove(10, 499, 150);
////////////////////////////delay_ms(155);


}


void zuozhuan(void)  // 弯道左走极速版1019 lbh
{
// #1 P498 #2 P502 #3 P502 #4 P502 #5 P498 #6 P502 #7 P504 #8 P429 #9 P388 #10 P498
LobotSerialServoMove(1, 498, 150);
LobotSerialServoMove(2, 502, 150);
LobotSerialServoMove(3, 502, 150);
LobotSerialServoMove(4, 502, 150);
LobotSerialServoMove(5, 498, 150);
LobotSerialServoMove(6, 502, 150);
LobotSerialServoMove(7, 504, 150);
LobotSerialServoMove(8, 429, 150);
LobotSerialServoMove(9, 388, 150);
LobotSerialServoMove(10, 498, 150);
delay_ms(155);

// #1 P496 #2 P528 #3 P502 #4 P420 #5 P498 #6 P498 #7 P501 #8 P429 #9 P445 #10 P557
LobotSerialServoMove(1, 496, 250);
LobotSerialServoMove(2, 528, 250);
LobotSerialServoMove(3, 502, 250);
LobotSerialServoMove(4, 420, 250);
LobotSerialServoMove(5, 498, 250);
LobotSerialServoMove(6, 498, 250);
LobotSerialServoMove(7, 501, 250);
LobotSerialServoMove(8, 429, 250);
LobotSerialServoMove(9, 445, 250);
LobotSerialServoMove(10, 557, 250);
delay_ms(255);

// #1 P507 #2 P529 #3 P503 #4 P424 #5 P496 #6 P499 #7 P501 #8 P495 #9 P498 #10 P558
LobotSerialServoMove(1, 507, 75);
LobotSerialServoMove(2, 529, 75);
LobotSerialServoMove(3, 503, 75);
LobotSerialServoMove(4, 424, 75);
LobotSerialServoMove(5, 496, 75);
LobotSerialServoMove(6, 499, 75);
LobotSerialServoMove(7, 501, 75);
LobotSerialServoMove(8, 495, 75);
LobotSerialServoMove(9, 498, 75);
LobotSerialServoMove(10, 558, 75);
delay_ms(80);

// #1 P504 #2 P522 #3 P504 #4 P425 #5 P537 #6 P500 #7 P504 #8 P600 #9 P584 #10 P555
LobotSerialServoMove(1, 504, 150);
LobotSerialServoMove(2, 522, 150);
LobotSerialServoMove(3, 504, 150);
LobotSerialServoMove(4, 425, 150);
LobotSerialServoMove(5, 537, 150);
LobotSerialServoMove(6, 500, 150);
LobotSerialServoMove(7, 504, 150);
LobotSerialServoMove(8, 600, 150);
LobotSerialServoMove(9, 584, 150);
LobotSerialServoMove(10, 555, 150);
delay_ms(155);

// #1 P493 #2 P472 #3 P506 #4 P556 #5 P499 #6 P501 #7 P544 #8 P566 #9 P585 #10 P470
LobotSerialServoMove(1, 493, 175);
LobotSerialServoMove(2, 472, 175);
LobotSerialServoMove(3, 506, 175);
LobotSerialServoMove(4, 556, 175);
LobotSerialServoMove(5, 499, 175);
LobotSerialServoMove(6, 501, 175);
LobotSerialServoMove(7, 544, 175);
LobotSerialServoMove(8, 566, 175);
LobotSerialServoMove(9, 585, 175);
LobotSerialServoMove(10, 470, 175);
delay_ms(180);

// #1 P493 #2 P491 #3 P506 #4 P556 #5 P501 #6 P501 #7 P547 #8 P545 #9 P575 #10 P475
LobotSerialServoMove(1, 493, 50);
LobotSerialServoMove(2, 491, 50);
LobotSerialServoMove(3, 506, 50);
LobotSerialServoMove(4, 556, 50);
LobotSerialServoMove(5, 501, 50);
LobotSerialServoMove(6, 501, 50);
LobotSerialServoMove(7, 547, 50);
LobotSerialServoMove(8, 545, 50);
LobotSerialServoMove(9, 575, 50);
LobotSerialServoMove(10, 475, 50);
delay_ms(55);

// #1 P493 #2 P488 #3 P504 #4 P556 #5 P456 #6 P502 #7 P577 #8 P513 #9 P532 #10 P475
LobotSerialServoMove(1, 493, 50);
LobotSerialServoMove(2, 488, 50);
LobotSerialServoMove(3, 504, 50);
LobotSerialServoMove(4, 556, 50);
LobotSerialServoMove(5, 456, 50);
LobotSerialServoMove(6, 502, 50);
LobotSerialServoMove(7, 577, 50);
LobotSerialServoMove(8, 513, 50);
LobotSerialServoMove(9, 532, 50);
LobotSerialServoMove(10, 475, 50);
delay_ms(55);

// #1 P496 #2 P493 #3 P503 #4 P557 #5 P461 #6 P502 #7 P572 #8 P414 #9 P390 #10 P475
LobotSerialServoMove(1, 496, 250);
LobotSerialServoMove(2, 493, 250);
LobotSerialServoMove(3, 503, 250);
LobotSerialServoMove(4, 557, 250);
LobotSerialServoMove(5, 461, 250);
LobotSerialServoMove(6, 502, 250);
LobotSerialServoMove(7, 572, 250);
LobotSerialServoMove(8, 414, 250);
LobotSerialServoMove(9, 390, 250);
LobotSerialServoMove(10, 475, 250);
delay_ms(255);

// #1 P493 #2 P492 #3 P556 #4 P432 #5 P404 #6 P436 #7 P542 #8 P416 #9 P445 #10 P476
LobotSerialServoMove(1, 493, 200);
LobotSerialServoMove(2, 492, 200);
LobotSerialServoMove(3, 556, 200);
LobotSerialServoMove(4, 432, 200);
LobotSerialServoMove(5, 404, 200);
LobotSerialServoMove(6, 436, 200);
LobotSerialServoMove(7, 542, 200);
LobotSerialServoMove(8, 416, 200);
LobotSerialServoMove(9, 445, 200);
LobotSerialServoMove(10, 476, 200);
delay_ms(205);

// #1 P493 #2 P498 #3 P506 #4 P497 #5 P499 #6 P497 #7 P509 #8 P496 #9 P496 #10 P493
LobotSerialServoMove(1, 493, 100);
LobotSerialServoMove(2, 498, 100);
LobotSerialServoMove(3, 506, 100);
LobotSerialServoMove(4, 497, 100);
LobotSerialServoMove(5, 499, 100);
LobotSerialServoMove(6, 497, 100);
LobotSerialServoMove(7, 509, 100);
LobotSerialServoMove(8, 496, 100);
LobotSerialServoMove(9, 496, 100);
LobotSerialServoMove(10, 493, 100);
delay_ms(105);

// #1 P497 #2 P498 #3 P504 #4 P501 #5 P495 #6 P501 #7 P505 #8 P496 #9 P496 #10 P494
LobotSerialServoMove(1, 497, 200);
LobotSerialServoMove(2, 498, 200);
LobotSerialServoMove(3, 504, 200);
LobotSerialServoMove(4, 501, 200);
LobotSerialServoMove(5, 495, 200);
LobotSerialServoMove(6, 501, 200);
LobotSerialServoMove(7, 505, 200);
LobotSerialServoMove(8, 496, 200);
LobotSerialServoMove(9, 496, 200);
LobotSerialServoMove(10, 494, 200);
delay_ms(205);
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

void Bend_straight_ahead(void) //弯道直走
{
// #1 P500 #2 P500 #3 P502 #4 P502 #5 P498 #6 P502 #7 P545 #8 P429 #9 P380 #10 P498
LobotSerialServoMove(1, 500, 25);
LobotSerialServoMove(2, 500, 25);
LobotSerialServoMove(3, 502, 25);
LobotSerialServoMove(4, 502, 25);
LobotSerialServoMove(5, 498, 25);
LobotSerialServoMove(6, 502, 25);
LobotSerialServoMove(7, 545, 25);
LobotSerialServoMove(8, 429, 25);
LobotSerialServoMove(9, 380, 25);
LobotSerialServoMove(10, 498, 25);
delay_ms(30);

// #1 P500 #2 P515 #3 P502 #4 P395 #5 P498 #6 P498 #7 P535 #8 P429 #9 P445 #10 P557
LobotSerialServoMove(1, 500, 225);
LobotSerialServoMove(2, 515, 225);
LobotSerialServoMove(3, 502, 225);
LobotSerialServoMove(4, 395, 225);
LobotSerialServoMove(5, 498, 225);
LobotSerialServoMove(6, 498, 225);
LobotSerialServoMove(7, 535, 225);
LobotSerialServoMove(8, 429, 225);
LobotSerialServoMove(9, 445, 225);
LobotSerialServoMove(10, 557, 225);
delay_ms(230);

// #1 P500 #2 P515 #3 P502 #4 P435 #5 P498 #6 P498 #7 P530 #8 P460 #9 P440 #10 P557
LobotSerialServoMove(1, 500, 50);
LobotSerialServoMove(2, 515, 50);
LobotSerialServoMove(3, 502, 50);
LobotSerialServoMove(4, 435, 50);
LobotSerialServoMove(5, 498, 50);
LobotSerialServoMove(6, 498, 50);
LobotSerialServoMove(7, 530, 50);
LobotSerialServoMove(8, 460, 50);
LobotSerialServoMove(9, 440, 50);
LobotSerialServoMove(10, 557, 50);
delay_ms(55);

// #1 P500 #2 P515 #3 P503 #4 P424 #5 P496 #6 P499 #7 P501 #8 P495 #9 P498 #10 P558
LobotSerialServoMove(1, 500, 75);
LobotSerialServoMove(2, 515, 75);
LobotSerialServoMove(3, 503, 75);
LobotSerialServoMove(4, 424, 75);
LobotSerialServoMove(5, 496, 75);
LobotSerialServoMove(6, 499, 75);
LobotSerialServoMove(7, 501, 75);
LobotSerialServoMove(8, 495, 75);
LobotSerialServoMove(9, 498, 75);
LobotSerialServoMove(10, 558, 75);
delay_ms(80);

// #1 P500 #2 P515 #3 P504 #4 P425 #5 P537 #6 P500 #7 P504 #8 P600 #9 P584 #10 P555
LobotSerialServoMove(1, 500, 150);
LobotSerialServoMove(2, 515, 150);
LobotSerialServoMove(3, 504, 150);
LobotSerialServoMove(4, 425, 150);
LobotSerialServoMove(5, 537, 150);
LobotSerialServoMove(6, 500, 150);
LobotSerialServoMove(7, 504, 150);
LobotSerialServoMove(8, 600, 150);
LobotSerialServoMove(9, 584, 150);
LobotSerialServoMove(10, 555, 150);
delay_ms(155);

// #1 P500 #2 P500 #3 P506 #4 P556 #5 P499 #6 P501 #7 P544 #8 P566 #9 P585 #10 P470
LobotSerialServoMove(1, 500, 175);
LobotSerialServoMove(2, 500, 175);
LobotSerialServoMove(3, 506, 175);
LobotSerialServoMove(4, 556, 175);
LobotSerialServoMove(5, 499, 175);
LobotSerialServoMove(6, 501, 175);
LobotSerialServoMove(7, 544, 175);
LobotSerialServoMove(8, 566, 175);
LobotSerialServoMove(9, 585, 175);
LobotSerialServoMove(10, 470, 175);
delay_ms(180);

// #1 P500 #2 P500 #3 P506 #4 P556 #5 P501 #6 P501 #7 P547 #8 P520 #9 P545 #10 P510
LobotSerialServoMove(1, 500, 50);
LobotSerialServoMove(2, 500, 50);
LobotSerialServoMove(3, 506, 50);
LobotSerialServoMove(4, 556, 50);
LobotSerialServoMove(5, 501, 50);
LobotSerialServoMove(6, 501, 50);
LobotSerialServoMove(7, 547, 50);
LobotSerialServoMove(8, 520, 50);
LobotSerialServoMove(9, 545, 50);
LobotSerialServoMove(10, 510, 50);
delay_ms(55);

// #1 P501 #2 P500 #3 P504 #4 P556 #5 P456 #6 P502 #7 P577 #8 P513 #9 P532 #10 P475
LobotSerialServoMove(1, 501, 50);
LobotSerialServoMove(2, 500, 50);
LobotSerialServoMove(3, 504, 50);
LobotSerialServoMove(4, 556, 50);
LobotSerialServoMove(5, 456, 50);
LobotSerialServoMove(6, 502, 50);
LobotSerialServoMove(7, 577, 50);
LobotSerialServoMove(8, 513, 50);
LobotSerialServoMove(9, 532, 50);
LobotSerialServoMove(10, 475, 50);
delay_ms(55);

// #1 P500 #2 P501 #3 P503 #4 P557 #5 P461 #6 P502 #7 P572 #8 P414 #9 P390 #10 P475
LobotSerialServoMove(1, 500, 250);
LobotSerialServoMove(2, 501, 250);
LobotSerialServoMove(3, 503, 250);
LobotSerialServoMove(4, 557, 250);
LobotSerialServoMove(5, 461, 250);
LobotSerialServoMove(6, 502, 250);
LobotSerialServoMove(7, 572, 250);
LobotSerialServoMove(8, 414, 250);
LobotSerialServoMove(9, 390, 250);
LobotSerialServoMove(10, 475, 250);
delay_ms(255);

// #1 P497 #2 P500 #3 P556 #4 P432 #5 P404 #6 P436 #7 P542 #8 P416 #9 P445 #10 P476
LobotSerialServoMove(1, 497, 200);
LobotSerialServoMove(2, 500, 200);
LobotSerialServoMove(3, 556, 200);
LobotSerialServoMove(4, 432, 200);
LobotSerialServoMove(5, 404, 200);
LobotSerialServoMove(6, 436, 200);
LobotSerialServoMove(7, 542, 200);
LobotSerialServoMove(8, 416, 200);
LobotSerialServoMove(9, 445, 200);
LobotSerialServoMove(10, 476, 200);
delay_ms(205);

// #1 P497 #2 P500 #3 P556 #4 P432 #5 P404 #6 P436 #7 P542 #8 P445 #9 P385 #10 P476
LobotSerialServoMove(1, 497, 100);
LobotSerialServoMove(2, 500, 100);
LobotSerialServoMove(3, 556, 100);
LobotSerialServoMove(4, 432, 100);
LobotSerialServoMove(5, 404, 100);
LobotSerialServoMove(6, 436, 100);
LobotSerialServoMove(7, 542, 100);
LobotSerialServoMove(8, 445, 100);
LobotSerialServoMove(9, 385, 100);
LobotSerialServoMove(10, 476, 100);
delay_ms(105);

// #1 P501 #2 P500 #3 P504 #4 P501 #5 P495 #6 P501 #7 P505 #8 P496 #9 P496 #10 P494
LobotSerialServoMove(1, 501, 200);
LobotSerialServoMove(2, 500, 200);
LobotSerialServoMove(3, 504, 200);
LobotSerialServoMove(4, 501, 200);
LobotSerialServoMove(5, 495, 200);
LobotSerialServoMove(6, 501, 200);
LobotSerialServoMove(7, 505, 200);
LobotSerialServoMove(8, 496, 200);
LobotSerialServoMove(9, 496, 200);
LobotSerialServoMove(10, 494, 200);
delay_ms(205);

}

void left_foot(void) //抬左脚
{
// #1 P498 #2 P503 #3 P499 #4 P500 #5 P505 #6 P498 #7 P505 #8 P500 #9 P503 #10 P497
LobotSerialServoMove(1, 498, 200);
LobotSerialServoMove(2, 503, 200);
LobotSerialServoMove(3, 499, 200);
LobotSerialServoMove(4, 500, 200);
LobotSerialServoMove(5, 505, 200);
LobotSerialServoMove(6, 498, 200);
LobotSerialServoMove(7, 505, 200);
LobotSerialServoMove(8, 500, 200);
LobotSerialServoMove(9, 503, 200);
LobotSerialServoMove(10, 497, 200);
delay_ms(205);

// #1 P492 #2 P505 #3 P507 #4 P501 #5 P510 #6 P498 #7 P509 #8 P620 #9 P610 #10 P520
LobotSerialServoMove(1, 492, 150);
LobotSerialServoMove(2, 505, 150);
LobotSerialServoMove(3, 507, 150);
LobotSerialServoMove(4, 501, 150);
LobotSerialServoMove(5, 510, 150);
LobotSerialServoMove(6, 498, 150);
LobotSerialServoMove(7, 509, 150);
LobotSerialServoMove(8, 620, 150);
LobotSerialServoMove(9, 610, 150);
LobotSerialServoMove(10, 520, 150);
delay_ms(155);

// #1 P492 #2 P505 #3 P507 #4 P501 #5 P510 #6 P498 #7 P509 #8 P620 #9 P610 #10 P520
LobotSerialServoMove(1, 492, 300);
LobotSerialServoMove(2, 505, 300);
LobotSerialServoMove(3, 507, 300);
LobotSerialServoMove(4, 501, 300);
LobotSerialServoMove(5, 510, 300);
LobotSerialServoMove(6, 498, 300);
LobotSerialServoMove(7, 509, 300);
LobotSerialServoMove(8, 620, 300);
LobotSerialServoMove(9, 610, 300);
LobotSerialServoMove(10, 520, 300);
delay_ms(305);

// #1 P495 #2 P505 #3 P500 #4 P715 #5 P506 #6 P498 #7 P506 #8 P500 #9 P610 #10 P498
LobotSerialServoMove(1, 495, 500);
LobotSerialServoMove(2, 505, 500);
LobotSerialServoMove(3, 500, 500);
LobotSerialServoMove(4, 715, 500);
LobotSerialServoMove(5, 506, 500);
LobotSerialServoMove(6, 498, 500);
LobotSerialServoMove(7, 506, 500);
LobotSerialServoMove(8, 500, 500);
LobotSerialServoMove(9, 610, 500);
LobotSerialServoMove(10, 498, 500);
delay_ms(505);

// #1 P495 #2 P505 #3 P500 #4 P715 #5 P506 #6 P498 #7 P506 #8 P500 #9 P610 #10 P498
LobotSerialServoMove(1, 495, 3000);
LobotSerialServoMove(2, 505, 3000);
LobotSerialServoMove(3, 500, 3000);
LobotSerialServoMove(4, 715, 3000);
LobotSerialServoMove(5, 506, 3000);
LobotSerialServoMove(6, 498, 3000);
LobotSerialServoMove(7, 506, 3000);
LobotSerialServoMove(8, 500, 3000);
LobotSerialServoMove(9, 610, 3000);
LobotSerialServoMove(10, 498, 3000);
delay_ms(3005);

// #1 P494 #2 P504 #3 P500 #4 P499 #5 P505 #6 P498 #7 P505 #8 P425 #9 P610 #10 P497
LobotSerialServoMove(1, 494, 500);
LobotSerialServoMove(2, 504, 500);
LobotSerialServoMove(3, 500, 500);
LobotSerialServoMove(4, 499, 500);
LobotSerialServoMove(5, 505, 500);
LobotSerialServoMove(6, 498, 500);
LobotSerialServoMove(7, 505, 500);
LobotSerialServoMove(8, 425, 500);
LobotSerialServoMove(9, 610, 500);
LobotSerialServoMove(10, 497, 500);
delay_ms(505);

// #1 P498 #2 P503 #3 P499 #4 P500 #5 P505 #6 P498 #7 P505 #8 P500 #9 P503 #10 P497
LobotSerialServoMove(1, 498, 500);
LobotSerialServoMove(2, 503, 500);
LobotSerialServoMove(3, 499, 500);
LobotSerialServoMove(4, 500, 500);
LobotSerialServoMove(5, 505, 500);
LobotSerialServoMove(6, 498, 500);
LobotSerialServoMove(7, 505, 500);
LobotSerialServoMove(8, 500, 500);
LobotSerialServoMove(9, 503, 500);
LobotSerialServoMove(10, 497, 500);
delay_ms(505);


}


void right_foot(void) //抬右脚
{
// #1 P499 #2 P505 #3 P501 #4 P502 #5 P506 #6 P500 #7 P505 #8 P499 #9 P503 #10 P498
LobotSerialServoMove(1, 499, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 501, 200);
LobotSerialServoMove(4, 502, 200);
LobotSerialServoMove(5, 506, 200);
LobotSerialServoMove(6, 500, 200);
LobotSerialServoMove(7, 505, 200);
LobotSerialServoMove(8, 499, 200);
LobotSerialServoMove(9, 503, 200);
LobotSerialServoMove(10, 498, 200);
delay_ms(205);

// #1 P496 #2 P507 #3 P506 #4 P504 #5 P504 #6 P497 #7 P505 #8 P390 #9 P385 #10 P504
LobotSerialServoMove(1, 496, 200);
LobotSerialServoMove(2, 507, 200);
LobotSerialServoMove(3, 506, 200);
LobotSerialServoMove(4, 504, 200);
LobotSerialServoMove(5, 504, 200);
LobotSerialServoMove(6, 497, 200);
LobotSerialServoMove(7, 505, 200);
LobotSerialServoMove(8, 390, 200);
LobotSerialServoMove(9, 385, 200);
LobotSerialServoMove(10, 504, 200);
delay_ms(205);

// #1 P497 #2 P505 #3 P742 #4 P505 #5 P502 #6 P495 #7 P505 #8 P394 #9 P494 #10 P504
LobotSerialServoMove(1, 497, 500);
LobotSerialServoMove(2, 505, 500);
LobotSerialServoMove(3, 742, 500);
LobotSerialServoMove(4, 505, 500);
LobotSerialServoMove(5, 502, 500);
LobotSerialServoMove(6, 495, 500);
LobotSerialServoMove(7, 505, 500);
LobotSerialServoMove(8, 394, 500);
LobotSerialServoMove(9, 494, 500);
LobotSerialServoMove(10, 504, 500);
delay_ms(505);

// #1 P497 #2 P505 #3 P742 #4 P505 #5 P502 #6 P495 #7 P505 #8 P394 #9 P494 #10 P504
LobotSerialServoMove(1, 497, 3000);
LobotSerialServoMove(2, 505, 3000);
LobotSerialServoMove(3, 742, 3000);
LobotSerialServoMove(4, 505, 3000);
LobotSerialServoMove(5, 502, 3000);
LobotSerialServoMove(6, 495, 3000);
LobotSerialServoMove(7, 505, 3000);
LobotSerialServoMove(8, 394, 3000);
LobotSerialServoMove(9, 494, 3000);
LobotSerialServoMove(10, 504, 3000);
delay_ms(3005);

// #1 P496 #2 P507 #3 P506 #4 P504 #5 P504 #6 P497 #7 P505 #8 P390 #9 P385 #10 P504
LobotSerialServoMove(1, 496, 500);
LobotSerialServoMove(2, 507, 500);
LobotSerialServoMove(3, 506, 500);
LobotSerialServoMove(4, 504, 500);
LobotSerialServoMove(5, 504, 500);
LobotSerialServoMove(6, 497, 500);
LobotSerialServoMove(7, 505, 500);
LobotSerialServoMove(8, 390, 500);
LobotSerialServoMove(9, 385, 500);
LobotSerialServoMove(10, 504, 500);
delay_ms(505);

// #1 P499 #2 P505 #3 P508 #4 P502 #5 P506 #6 P497 #7 P505 #8 P496 #9 P498 #10 P503
LobotSerialServoMove(1, 499, 500);
LobotSerialServoMove(2, 505, 500);
LobotSerialServoMove(3, 508, 500);
LobotSerialServoMove(4, 502, 500);
LobotSerialServoMove(5, 506, 500);
LobotSerialServoMove(6, 497, 500);
LobotSerialServoMove(7, 505, 500);
LobotSerialServoMove(8, 496, 500);
LobotSerialServoMove(9, 498, 500);
LobotSerialServoMove(10, 503, 500);
delay_ms(505);

}

void quick_straight(void)  // 1019直走极速版lbh
{
// #1 P507 #2 P500 #3 P502 #4 P502 #5 P498 #6 P502 #7 P504 #8 P429 #9 P388 #10 P498
LobotSerialServoMove(1, 507, 150);
LobotSerialServoMove(2, 500, 150);
LobotSerialServoMove(3, 502, 150);
LobotSerialServoMove(4, 502, 150);
LobotSerialServoMove(5, 498, 150);
LobotSerialServoMove(6, 502, 150);
LobotSerialServoMove(7, 504, 150);
LobotSerialServoMove(8, 429, 150);
LobotSerialServoMove(9, 388, 150);
LobotSerialServoMove(10, 498, 150);
delay_ms(155);

// #1 P504 #2 P520 #3 P502 #4 P420 #5 P498 #6 P498 #7 P501 #8 P429 #9 P445 #10 P557
LobotSerialServoMove(1, 504, 250);
LobotSerialServoMove(2, 520, 250);
LobotSerialServoMove(3, 502, 250);
LobotSerialServoMove(4, 420, 250);
LobotSerialServoMove(5, 498, 250);
LobotSerialServoMove(6, 498, 250);
LobotSerialServoMove(7, 501, 250);
LobotSerialServoMove(8, 429, 250);
LobotSerialServoMove(9, 445, 250);
LobotSerialServoMove(10, 557, 250);
delay_ms(255);

// #1 P516 #2 P520 #3 P503 #4 P424 #5 P496 #6 P499 #7 P501 #8 P495 #9 P498 #10 P558
LobotSerialServoMove(1, 516, 75);
LobotSerialServoMove(2, 520, 75);
LobotSerialServoMove(3, 503, 75);
LobotSerialServoMove(4, 424, 75);
LobotSerialServoMove(5, 496, 75);
LobotSerialServoMove(6, 499, 75);
LobotSerialServoMove(7, 501, 75);
LobotSerialServoMove(8, 495, 75);
LobotSerialServoMove(9, 498, 75);
LobotSerialServoMove(10, 558, 75);
delay_ms(80);

// #1 P512 #2 P520 #3 P504 #4 P425 #5 P537 #6 P500 #7 P504 #8 P600 #9 P584 #10 P555
LobotSerialServoMove(1, 512, 150);
LobotSerialServoMove(2, 520, 150);
LobotSerialServoMove(3, 504, 150);
LobotSerialServoMove(4, 425, 150);
LobotSerialServoMove(5, 537, 150);
LobotSerialServoMove(6, 500, 150);
LobotSerialServoMove(7, 504, 150);
LobotSerialServoMove(8, 600, 150);
LobotSerialServoMove(9, 584, 150);
LobotSerialServoMove(10, 555, 150);
delay_ms(155);

// #1 P501 #2 P503 #3 P506 #4 P556 #5 P499 #6 P501 #7 P544 #8 P566 #9 P585 #10 P470
LobotSerialServoMove(1, 501, 175);
LobotSerialServoMove(2, 503, 175);
LobotSerialServoMove(3, 506, 175);
LobotSerialServoMove(4, 556, 175);
LobotSerialServoMove(5, 499, 175);
LobotSerialServoMove(6, 501, 175);
LobotSerialServoMove(7, 544, 175);
LobotSerialServoMove(8, 566, 175);
LobotSerialServoMove(9, 585, 175);
LobotSerialServoMove(10, 470, 175);
delay_ms(180);

// #1 P502 #2 P500 #3 P506 #4 P556 #5 P501 #6 P501 #7 P547 #8 P545 #9 P575 #10 P475
LobotSerialServoMove(1, 502, 50);
LobotSerialServoMove(2, 500, 50);
LobotSerialServoMove(3, 506, 50);
LobotSerialServoMove(4, 556, 50);
LobotSerialServoMove(5, 501, 50);
LobotSerialServoMove(6, 501, 50);
LobotSerialServoMove(7, 547, 50);
LobotSerialServoMove(8, 545, 50);
LobotSerialServoMove(9, 575, 50);
LobotSerialServoMove(10, 475, 50);
delay_ms(55);

// #1 P501 #2 P496 #3 P504 #4 P556 #5 P456 #6 P502 #7 P577 #8 P513 #9 P532 #10 P475
LobotSerialServoMove(1, 501, 50);
LobotSerialServoMove(2, 496, 50);
LobotSerialServoMove(3, 504, 50);
LobotSerialServoMove(4, 556, 50);
LobotSerialServoMove(5, 456, 50);
LobotSerialServoMove(6, 502, 50);
LobotSerialServoMove(7, 577, 50);
LobotSerialServoMove(8, 513, 50);
LobotSerialServoMove(9, 532, 50);
LobotSerialServoMove(10, 475, 50);
delay_ms(55);

// #1 P500 #2 P501 #3 P503 #4 P557 #5 P461 #6 P502 #7 P572 #8 P414 #9 P390 #10 P475
LobotSerialServoMove(1, 500, 250);
LobotSerialServoMove(2, 501, 250);
LobotSerialServoMove(3, 503, 250);
LobotSerialServoMove(4, 557, 250);
LobotSerialServoMove(5, 461, 250);
LobotSerialServoMove(6, 502, 250);
LobotSerialServoMove(7, 572, 250);
LobotSerialServoMove(8, 414, 250);
LobotSerialServoMove(9, 390, 250);
LobotSerialServoMove(10, 475, 250);
delay_ms(255);

// #1 P497 #2 P500 #3 P556 #4 P432 #5 P404 #6 P436 #7 P542 #8 P416 #9 P445 #10 P476
LobotSerialServoMove(1, 497, 200);
LobotSerialServoMove(2, 500, 200);
LobotSerialServoMove(3, 556, 200);
LobotSerialServoMove(4, 432, 200);
LobotSerialServoMove(5, 404, 200);
LobotSerialServoMove(6, 436, 200);
LobotSerialServoMove(7, 542, 200);
LobotSerialServoMove(8, 416, 200);
LobotSerialServoMove(9, 445, 200);
LobotSerialServoMove(10, 476, 200);
delay_ms(205);

// #1 P497 #2 P500 #3 P506 #4 P497 #5 P499 #6 P497 #7 P509 #8 P496 #9 P496 #10 P493
LobotSerialServoMove(1, 497, 100);
LobotSerialServoMove(2, 500, 100);
LobotSerialServoMove(3, 506, 100);
LobotSerialServoMove(4, 497, 100);
LobotSerialServoMove(5, 499, 100);
LobotSerialServoMove(6, 497, 100);
LobotSerialServoMove(7, 509, 100);
LobotSerialServoMove(8, 496, 100);
LobotSerialServoMove(9, 496, 100);
LobotSerialServoMove(10, 493, 100);
delay_ms(105);

// #1 P501 #2 P500 #3 P504 #4 P501 #5 P495 #6 P501 #7 P505 #8 P496 #9 P496 #10 P494
LobotSerialServoMove(1, 501, 200);
LobotSerialServoMove(2, 500, 200);
LobotSerialServoMove(3, 504, 200);
LobotSerialServoMove(4, 501, 200);
LobotSerialServoMove(5, 495, 200);
LobotSerialServoMove(6, 501, 200);
LobotSerialServoMove(7, 505, 200);
LobotSerialServoMove(8, 496, 200);
LobotSerialServoMove(9, 496, 200);
LobotSerialServoMove(10, 494, 200);
delay_ms(205);

}

void improved_straight(void)  // 1019直走改良版lbh
{
// #1 P507 #2 P500 #3 P502 #4 P502 #5 P498 #6 P502 #7 P504 #8 P429 #9 P388 #10 P498
LobotSerialServoMove(1, 507, 150);
LobotSerialServoMove(2, 500, 150);
LobotSerialServoMove(3, 502, 150);
LobotSerialServoMove(4, 502, 150);
LobotSerialServoMove(5, 498, 150);
LobotSerialServoMove(6, 502, 150);
LobotSerialServoMove(7, 504, 150);
LobotSerialServoMove(8, 429, 150);
LobotSerialServoMove(9, 388, 150);
LobotSerialServoMove(10, 498, 150);
delay_ms(155);

// #1 P504 #2 P481 #3 P502 #4 P420 #5 P498 #6 P498 #7 P501 #8 P429 #9 P445 #10 P557
LobotSerialServoMove(1, 504, 200);
LobotSerialServoMove(2, 481, 200);
LobotSerialServoMove(3, 502, 200);
LobotSerialServoMove(4, 420, 200);
LobotSerialServoMove(5, 498, 200);
LobotSerialServoMove(6, 498, 200);
LobotSerialServoMove(7, 501, 200);
LobotSerialServoMove(8, 429, 200);
LobotSerialServoMove(9, 445, 200);
LobotSerialServoMove(10, 557, 200);
delay_ms(205);

// #1 P516 #2 P500 #3 P503 #4 P424 #5 P496 #6 P499 #7 P501 #8 P495 #9 P498 #10 P558
LobotSerialServoMove(1, 516, 100);
LobotSerialServoMove(2, 500, 100);
LobotSerialServoMove(3, 503, 100);
LobotSerialServoMove(4, 424, 100);
LobotSerialServoMove(5, 496, 100);
LobotSerialServoMove(6, 499, 100);
LobotSerialServoMove(7, 501, 100);
LobotSerialServoMove(8, 495, 100);
LobotSerialServoMove(9, 498, 100);
LobotSerialServoMove(10, 558, 100);
delay_ms(105);

// #1 P512 #2 P500 #3 P504 #4 P425 #5 P537 #6 P500 #7 P504 #8 P600 #9 P584 #10 P555
LobotSerialServoMove(1, 512, 150);
LobotSerialServoMove(2, 500, 150);
LobotSerialServoMove(3, 504, 150);
LobotSerialServoMove(4, 425, 150);
LobotSerialServoMove(5, 537, 150);
LobotSerialServoMove(6, 500, 150);
LobotSerialServoMove(7, 504, 150);
LobotSerialServoMove(8, 600, 150);
LobotSerialServoMove(9, 584, 150);
LobotSerialServoMove(10, 555, 150);
delay_ms(155);

// #1 P501 #2 P500 #3 P506 #4 P556 #5 P499 #6 P501 #7 P544 #8 P566 #9 P585 #10 P470
LobotSerialServoMove(1, 501, 150);
LobotSerialServoMove(2, 500, 150);
LobotSerialServoMove(3, 506, 150);
LobotSerialServoMove(4, 556, 150);
LobotSerialServoMove(5, 499, 150);
LobotSerialServoMove(6, 501, 150);
LobotSerialServoMove(7, 544, 150);
LobotSerialServoMove(8, 566, 150);
LobotSerialServoMove(9, 585, 150);
LobotSerialServoMove(10, 470, 150);
delay_ms(155);

// #1 P502 #2 P500 #3 P506 #4 P556 #5 P501 #6 P501 #7 P547 #8 P545 #9 P575 #10 P475
LobotSerialServoMove(1, 502, 50);
LobotSerialServoMove(2, 500, 50);
LobotSerialServoMove(3, 506, 50);
LobotSerialServoMove(4, 556, 50);
LobotSerialServoMove(5, 501, 50);
LobotSerialServoMove(6, 501, 50);
LobotSerialServoMove(7, 547, 50);
LobotSerialServoMove(8, 545, 50);
LobotSerialServoMove(9, 575, 50);
LobotSerialServoMove(10, 475, 50);
delay_ms(55);

// #1 P501 #2 P500 #3 P504 #4 P556 #5 P456 #6 P502 #7 P577 #8 P513 #9 P532 #10 P475
LobotSerialServoMove(1, 501, 100);
LobotSerialServoMove(2, 500, 100);
LobotSerialServoMove(3, 504, 100);
LobotSerialServoMove(4, 556, 100);
LobotSerialServoMove(5, 456, 100);
LobotSerialServoMove(6, 502, 100);
LobotSerialServoMove(7, 577, 100);
LobotSerialServoMove(8, 513, 100);
LobotSerialServoMove(9, 532, 100);
LobotSerialServoMove(10, 475, 100);
delay_ms(105);

// #1 P500 #2 P500 #3 P503 #4 P557 #5 P461 #6 P502 #7 P572 #8 P414 #9 P390 #10 P475
LobotSerialServoMove(1, 500, 200);
LobotSerialServoMove(2, 500, 200);
LobotSerialServoMove(3, 503, 200);
LobotSerialServoMove(4, 557, 200);
LobotSerialServoMove(5, 461, 200);
LobotSerialServoMove(6, 502, 200);
LobotSerialServoMove(7, 572, 200);
LobotSerialServoMove(8, 414, 200);
LobotSerialServoMove(9, 390, 200);
LobotSerialServoMove(10, 475, 200);
delay_ms(205);

// #1 P497 #2 P500 #3 P556 #4 P432 #5 P404 #6 P436 #7 P542 #8 P416 #9 P445 #10 P476
LobotSerialServoMove(1, 497, 200);
LobotSerialServoMove(2, 500, 200);
LobotSerialServoMove(3, 556, 200);
LobotSerialServoMove(4, 432, 200);
LobotSerialServoMove(5, 404, 200);
LobotSerialServoMove(6, 436, 200);
LobotSerialServoMove(7, 542, 200);
LobotSerialServoMove(8, 416, 200);
LobotSerialServoMove(9, 445, 200);
LobotSerialServoMove(10, 476, 200);
delay_ms(205);

// #1 P497 #2 P500 #3 P506 #4 P497 #5 P499 #6 P497 #7 P509 #8 P496 #9 P496 #10 P493
LobotSerialServoMove(1, 497, 100);
LobotSerialServoMove(2, 500, 100);
LobotSerialServoMove(3, 506, 100);
LobotSerialServoMove(4, 497, 100);
LobotSerialServoMove(5, 499, 100);
LobotSerialServoMove(6, 497, 100);
LobotSerialServoMove(7, 509, 100);
LobotSerialServoMove(8, 496, 100);
LobotSerialServoMove(9, 496, 100);
LobotSerialServoMove(10, 493, 100);
delay_ms(105);

// #1 P501 #2 P500 #3 P504 #4 P501 #5 P495 #6 P501 #7 P505 #8 P496 #9 P496 #10 P494
LobotSerialServoMove(1, 501, 200);
LobotSerialServoMove(2, 500, 200);
LobotSerialServoMove(3, 504, 200);
LobotSerialServoMove(4, 501, 200);
LobotSerialServoMove(5, 495, 200);
LobotSerialServoMove(6, 501, 200);
LobotSerialServoMove(7, 505, 200);
LobotSerialServoMove(8, 496, 200);
LobotSerialServoMove(9, 496, 200);
LobotSerialServoMove(10, 494, 200);
delay_ms(205);

}

void raise_both_hands(void)
{ //PA6 is angle1 which is head ,PA7 is angle_2 which is righr hand,  PB0 is angle3 which is left hand
	// #1 P510 #2 P495 #3 P502 #4 P502 #5 P498 #6 P502 #7 P540 #8 P425 #9 P388 #10 P525
LobotSerialServoMove(1, 498, 300);
LobotSerialServoMove(2, 503, 300);
LobotSerialServoMove(3, 499, 300);
LobotSerialServoMove(4, 500, 300);
LobotSerialServoMove(5, 505, 300);
LobotSerialServoMove(6, 498, 300);
LobotSerialServoMove(7, 505, 300);
LobotSerialServoMove(8, 500, 300);
LobotSerialServoMove(9, 503, 300);
LobotSerialServoMove(10,497, 300);

delay_ms(305);


LobotSerialServoMove(1, 498, 3500);
LobotSerialServoMove(2, 503, 3500);
LobotSerialServoMove(3, 499, 3500);
LobotSerialServoMove(4, 500, 3500);
LobotSerialServoMove(5, 505, 3500);
LobotSerialServoMove(6, 498, 3500);
LobotSerialServoMove(7, 505, 3500);
LobotSerialServoMove(8, 500, 3500);
LobotSerialServoMove(9, 503, 3500);
LobotSerialServoMove(10,497, 3500);	
servo_angle2(175);
servo_angle3(5);
delay_ms(3505);
}
void raise_right_hands(void)
{
LobotSerialServoMove(1, 498, 300);
LobotSerialServoMove(2, 503, 300);
LobotSerialServoMove(3, 499, 300);
LobotSerialServoMove(4, 500, 300);
LobotSerialServoMove(5, 505, 300);
LobotSerialServoMove(6, 498, 300);
LobotSerialServoMove(7, 505, 300);
LobotSerialServoMove(8, 500, 300);
LobotSerialServoMove(9, 503, 300);
LobotSerialServoMove(10,497, 300);

delay_ms(305);


LobotSerialServoMove(1, 498, 3500);
LobotSerialServoMove(2, 503, 3500);
LobotSerialServoMove(3, 499, 3500);
LobotSerialServoMove(4, 500, 3500);
LobotSerialServoMove(5, 505, 3500);
LobotSerialServoMove(6, 498, 3500);
LobotSerialServoMove(7, 505, 3500);
LobotSerialServoMove(8, 500, 3500);
LobotSerialServoMove(9, 503, 3500);
LobotSerialServoMove(10,497, 3500);	
servo_angle2(175);
servo_angle3(175);
delay_ms(3505);
}

void raise_left_hands(void)
{
LobotSerialServoMove(1, 498, 300);
LobotSerialServoMove(2, 503, 300);
LobotSerialServoMove(3, 499, 300);
LobotSerialServoMove(4, 500, 300);
LobotSerialServoMove(5, 505, 300);
LobotSerialServoMove(6, 498, 300);
LobotSerialServoMove(7, 505, 300);
LobotSerialServoMove(8, 500, 300);
LobotSerialServoMove(9, 503, 300);
LobotSerialServoMove(10,497, 300);


delay_ms(305);


LobotSerialServoMove(1, 498, 3500);
LobotSerialServoMove(2, 503, 3500);
LobotSerialServoMove(3, 499, 3500);
LobotSerialServoMove(4, 500, 3500);
LobotSerialServoMove(5, 505, 3500);
LobotSerialServoMove(6, 498, 3500);
LobotSerialServoMove(7, 505, 3500);
LobotSerialServoMove(8, 500, 3500);
LobotSerialServoMove(9, 503, 3500);
LobotSerialServoMove(10,497, 3500);	
servo_angle2(5);
servo_angle3(5);

delay_ms(3505);
}
void shift_head(void)
{
LobotSerialServoMove(1, 498, 800);
LobotSerialServoMove(2, 503, 800);
LobotSerialServoMove(3, 499, 800);
LobotSerialServoMove(4, 500, 800);
LobotSerialServoMove(5, 505, 800);
LobotSerialServoMove(6, 498, 800);
LobotSerialServoMove(7, 505, 800);
LobotSerialServoMove(8, 500, 800);
LobotSerialServoMove(9, 503, 800);
LobotSerialServoMove(10,497,800);	
servo_angle1(20);
delay_ms(805);


LobotSerialServoMove(1, 498, 800);
LobotSerialServoMove(2, 503, 800);
LobotSerialServoMove(3, 499, 800);
LobotSerialServoMove(4, 500, 800);
LobotSerialServoMove(5, 505, 800);
LobotSerialServoMove(6, 498, 800);
LobotSerialServoMove(7, 505, 800);
LobotSerialServoMove(8, 500, 800);
LobotSerialServoMove(9, 503, 800);
LobotSerialServoMove(10,497,800);	
servo_angle1(110);
delay_ms(805);

LobotSerialServoMove(1, 498, 800);
LobotSerialServoMove(2, 503, 800);
LobotSerialServoMove(3, 499, 800);
LobotSerialServoMove(4, 500, 800);
LobotSerialServoMove(5, 505, 800);
LobotSerialServoMove(6, 498, 800);
LobotSerialServoMove(7, 505, 800);
LobotSerialServoMove(8, 500, 800);
LobotSerialServoMove(9, 503, 800);
LobotSerialServoMove(10,497,800);	
servo_angle1(30);
delay_ms(805);

LobotSerialServoMove(1, 498, 600);
LobotSerialServoMove(2, 503, 600);
LobotSerialServoMove(3, 499, 600);
LobotSerialServoMove(4, 500, 600);
LobotSerialServoMove(5, 505, 600);
LobotSerialServoMove(6, 498, 600);
LobotSerialServoMove(7, 505, 600);
LobotSerialServoMove(8, 500, 600);
LobotSerialServoMove(9, 503, 600);
LobotSerialServoMove(10,497,600);	
servo_angle1(120);
delay_ms(605);	

LobotSerialServoMove(1, 498, 600);
LobotSerialServoMove(2, 503, 600);
LobotSerialServoMove(3, 499, 600);
LobotSerialServoMove(4, 500, 600);
LobotSerialServoMove(5, 505, 600);
LobotSerialServoMove(6, 498, 600);
LobotSerialServoMove(7, 505, 600);
LobotSerialServoMove(8, 500, 600);
LobotSerialServoMove(9, 503, 600);
LobotSerialServoMove(10,497,600);	
servo_angle1(90);
delay_ms(605);	
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

}

void youzhuanzhi(void)
{

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
    servo_angle2(90);
	  servo_angle3(90);
	  delay_ms(1005);
	
	  servo_angle2(175);
	  servo_angle3(175);
	  delay_ms(1005);
	
	  servo_angle2(175);
	  servo_angle3(175);
	  delay_ms(1005);
}

void ceshizuo(void)
{

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
void zuozhuan1031(void)
{
// #1 P482 #2 P500 #3 P502 #4 P502 #5 P498 #6 P502 #7 P540 #8 P425 #9 P388 #10 P525
LobotSerialServoMove(1, 482, 200);
LobotSerialServoMove(2, 500, 200);
LobotSerialServoMove(3, 502, 200);
LobotSerialServoMove(4, 502, 200);
LobotSerialServoMove(5, 498, 200);
LobotSerialServoMove(6, 502, 200);
LobotSerialServoMove(7, 540, 200);
LobotSerialServoMove(8, 425, 200);
LobotSerialServoMove(9, 388, 200);
LobotSerialServoMove(10, 525, 200);
delay_ms(205);

// #1 P475 #2 P500 #3 P545 #4 P440 #5 P498 #6 P498 #7 P501 #8 P429 #9 P445 #10 P557
LobotSerialServoMove(1, 475, 125);
LobotSerialServoMove(2, 500, 125);
LobotSerialServoMove(3, 545, 125);
LobotSerialServoMove(4, 440, 125);
LobotSerialServoMove(5, 498, 125);
LobotSerialServoMove(6, 498, 125);
LobotSerialServoMove(7, 501, 125);
LobotSerialServoMove(8, 429, 125);
LobotSerialServoMove(9, 445, 125);
LobotSerialServoMove(10, 557, 125);
delay_ms(130);

// #1 P475 #2 P500 #3 P502 #4 P395 #5 P498 #6 P498 #7 P490 #8 P450 #9 P445 #10 P557
LobotSerialServoMove(1, 475, 50);
LobotSerialServoMove(2, 500, 50);
LobotSerialServoMove(3, 502, 50);
LobotSerialServoMove(4, 395, 50);
LobotSerialServoMove(5, 498, 50);
LobotSerialServoMove(6, 498, 50);
LobotSerialServoMove(7, 490, 50);
LobotSerialServoMove(8, 450, 50);
LobotSerialServoMove(9, 445, 50);
LobotSerialServoMove(10, 557, 50);
delay_ms(55);

// #1 P475 #2 P500 #3 P503 #4 P424 #5 P496 #6 P499 #7 P501 #8 P495 #9 P498 #10 P558
LobotSerialServoMove(1, 475, 100);
LobotSerialServoMove(2, 500, 100);
LobotSerialServoMove(3, 503, 100);
LobotSerialServoMove(4, 424, 100);
LobotSerialServoMove(5, 496, 100);
LobotSerialServoMove(6, 499, 100);
LobotSerialServoMove(7, 501, 100);
LobotSerialServoMove(8, 495, 100);
LobotSerialServoMove(9, 498, 100);
LobotSerialServoMove(10, 558, 100);
delay_ms(105);

// #1 P475 #2 P470 #3 P503 #4 P424 #5 P496 #6 P499 #7 P525 #8 P670 #9 P585 #10 P605
LobotSerialServoMove(1, 475, 200);
LobotSerialServoMove(2, 470, 200);
LobotSerialServoMove(3, 503, 200);
LobotSerialServoMove(4, 424, 200);
LobotSerialServoMove(5, 496, 200);
LobotSerialServoMove(6, 499, 200);
LobotSerialServoMove(7, 525, 200);
LobotSerialServoMove(8, 670, 200);
LobotSerialServoMove(9, 585, 200);
LobotSerialServoMove(10, 605, 200);
delay_ms(205);

// #1 P475 #2 P430 #3 P475 #4 P556 #5 P499 #6 P501 #7 P544 #8 P566 #9 P600 #10 P470
LobotSerialServoMove(1, 475, 125);
LobotSerialServoMove(2, 430, 125);
LobotSerialServoMove(3, 475, 125);
LobotSerialServoMove(4, 556, 125);
LobotSerialServoMove(5, 499, 125);
LobotSerialServoMove(6, 501, 125);
LobotSerialServoMove(7, 544, 125);
LobotSerialServoMove(8, 566, 125);
LobotSerialServoMove(9, 600, 125);
LobotSerialServoMove(10, 470, 125);
delay_ms(130);

// #1 P475 #2 P430 #3 P475 #4 P556 #5 P499 #6 P501 #7 P544 #8 P566 #9 P560 #10 P490
LobotSerialServoMove(1, 475, 50);
LobotSerialServoMove(2, 430, 50);
LobotSerialServoMove(3, 475, 50);
LobotSerialServoMove(4, 556, 50);
LobotSerialServoMove(5, 499, 50);
LobotSerialServoMove(6, 501, 50);
LobotSerialServoMove(7, 544, 50);
LobotSerialServoMove(8, 566, 50);
LobotSerialServoMove(9, 560, 50);
LobotSerialServoMove(10, 490, 50);
delay_ms(55);

// #1 P482 #2 P470 #3 P504 #4 P556 #5 P456 #6 P502 #7 P577 #8 P513 #9 P532 #10 P475
LobotSerialServoMove(1, 482, 100);
LobotSerialServoMove(2, 470, 100);
LobotSerialServoMove(3, 504, 100);
LobotSerialServoMove(4, 556, 100);
LobotSerialServoMove(5, 456, 100);
LobotSerialServoMove(6, 502, 100);
LobotSerialServoMove(7, 577, 100);
LobotSerialServoMove(8, 513, 100);
LobotSerialServoMove(9, 532, 100);
LobotSerialServoMove(10, 475, 100);
delay_ms(105);
}
void youzhuan1031(void)
{
	// #1 P500 #2 P500 #3 P502 #4 P502 #5 P498 #6 P502 #7 P540 #8 P425 #9 P388 #10 P525
LobotSerialServoMove(1, 500, 200);
LobotSerialServoMove(2, 500, 200);
LobotSerialServoMove(3, 502, 200);
LobotSerialServoMove(4, 502, 200);
LobotSerialServoMove(5, 498, 200);
LobotSerialServoMove(6, 502, 200);
LobotSerialServoMove(7, 540, 200);
LobotSerialServoMove(8, 425, 200);
LobotSerialServoMove(9, 388, 200);
LobotSerialServoMove(10, 525, 200);
delay_ms(205);

// #1 P500 #2 P480 #3 P545 #4 P440 #5 P498 #6 P498 #7 P501 #8 P429 #9 P445 #10 P557
LobotSerialServoMove(1, 500, 125);
LobotSerialServoMove(2, 480, 125);
LobotSerialServoMove(3, 545, 125);
LobotSerialServoMove(4, 440, 125);
LobotSerialServoMove(5, 498, 125);
LobotSerialServoMove(6, 498, 125);
LobotSerialServoMove(7, 501, 125);
LobotSerialServoMove(8, 429, 125);
LobotSerialServoMove(9, 445, 125);
LobotSerialServoMove(10, 557, 125);
delay_ms(130);

// #1 P500 #2 P480 #3 P502 #4 P395 #5 P498 #6 P498 #7 P490 #8 P450 #9 P445 #10 P557
LobotSerialServoMove(1, 500, 50);
LobotSerialServoMove(2, 480, 50);
LobotSerialServoMove(3, 502, 50);
LobotSerialServoMove(4, 395, 50);
LobotSerialServoMove(5, 498, 50);
LobotSerialServoMove(6, 498, 50);
LobotSerialServoMove(7, 490, 50);
LobotSerialServoMove(8, 450, 50);
LobotSerialServoMove(9, 445, 50);
LobotSerialServoMove(10, 557, 50);
delay_ms(55);

// #1 P500 #2 P480 #3 P503 #4 P424 #5 P496 #6 P499 #7 P501 #8 P495 #9 P498 #10 P558
LobotSerialServoMove(1, 500, 100);
LobotSerialServoMove(2, 480, 100);
LobotSerialServoMove(3, 503, 100);
LobotSerialServoMove(4, 424, 100);
LobotSerialServoMove(5, 496, 100);
LobotSerialServoMove(6, 499, 100);
LobotSerialServoMove(7, 501, 100);
LobotSerialServoMove(8, 495, 100);
LobotSerialServoMove(9, 498, 100);
LobotSerialServoMove(10, 558, 100);
delay_ms(105);

// #1 P500 #2 P485 #3 P503 #4 P424 #5 P496 #6 P499 #7 P525 #8 P670 #9 P590 #10 P605
LobotSerialServoMove(1, 500, 200);
LobotSerialServoMove(2, 485, 200);
LobotSerialServoMove(3, 503, 200);
LobotSerialServoMove(4, 424, 200);
LobotSerialServoMove(5, 496, 200);
LobotSerialServoMove(6, 499, 200);
LobotSerialServoMove(7, 525, 200);
LobotSerialServoMove(8, 670, 200);
LobotSerialServoMove(9, 590, 200);
LobotSerialServoMove(10, 605, 200);
delay_ms(205);

// #1 P510 #2 P520 #3 P475 #4 P556 #5 P499 #6 P501 #7 P544 #8 P566 #9 P600 #10 P470
LobotSerialServoMove(1, 510, 125);
LobotSerialServoMove(2, 520, 125);
LobotSerialServoMove(3, 475, 125);
LobotSerialServoMove(4, 556, 125);
LobotSerialServoMove(5, 499, 125);
LobotSerialServoMove(6, 501, 125);
LobotSerialServoMove(7, 544, 125);
LobotSerialServoMove(8, 566, 125);
LobotSerialServoMove(9, 600, 125);
LobotSerialServoMove(10, 470, 125);
delay_ms(130);

// #1 P510 #2 P520 #3 P475 #4 P556 #5 P499 #6 P501 #7 P544 #8 P566 #9 P560 #10 P490
LobotSerialServoMove(1, 510, 50);
LobotSerialServoMove(2, 520, 50);
LobotSerialServoMove(3, 475, 50);
LobotSerialServoMove(4, 556, 50);
LobotSerialServoMove(5, 499, 50);
LobotSerialServoMove(6, 501, 50);
LobotSerialServoMove(7, 544, 50);
LobotSerialServoMove(8, 566, 50);
LobotSerialServoMove(9, 560, 50);
LobotSerialServoMove(10, 490, 50);
delay_ms(55);

// #1 P510 #2 P510 #3 P504 #4 P556 #5 P456 #6 P502 #7 P577 #8 P513 #9 P532 #10 P475
LobotSerialServoMove(1, 510, 100);
LobotSerialServoMove(2, 510, 100);
LobotSerialServoMove(3, 504, 100);
LobotSerialServoMove(4, 556, 100);
LobotSerialServoMove(5, 456, 100);
LobotSerialServoMove(6, 502, 100);
LobotSerialServoMove(7, 577, 100);
LobotSerialServoMove(8, 513, 100);
LobotSerialServoMove(9, 532, 100);
LobotSerialServoMove(10, 475, 100);
delay_ms(105);

}
void kuayue1031(void)
{
	// #1 P498 #2 P499 #3 P503 #4 P502 #5 P504 #6 P499 #7 P504 #8 P448 #9 P392 #10 P507
LobotSerialServoMove(1, 498, 200);
LobotSerialServoMove(2, 499, 200);
LobotSerialServoMove(3, 503, 200);
LobotSerialServoMove(4, 502, 200);
LobotSerialServoMove(5, 504, 200);
LobotSerialServoMove(6, 499, 200);
LobotSerialServoMove(7, 504, 200);
LobotSerialServoMove(8, 448, 200);
LobotSerialServoMove(9, 392, 200);
LobotSerialServoMove(10, 507, 200);
delay_ms(205);

// #1 P498 #2 P498 #3 P557 #4 P436 #5 P496 #6 P497 #7 P503 #8 P454 #9 P440 #10 P580
LobotSerialServoMove(1, 498, 200);
LobotSerialServoMove(2, 498, 200);
LobotSerialServoMove(3, 557, 200);
LobotSerialServoMove(4, 436, 200);
LobotSerialServoMove(5, 496, 200);
LobotSerialServoMove(6, 497, 200);
LobotSerialServoMove(7, 503, 200);
LobotSerialServoMove(8, 454, 200);
LobotSerialServoMove(9, 440, 200);
LobotSerialServoMove(10, 580, 200);
delay_ms(205);

// #1 P495 #2 P493 #3 P551 #4 P443 #5 P496 #6 P496 #7 P504 #8 P615 #9 P570 #10 P582
LobotSerialServoMove(1, 495, 200);
LobotSerialServoMove(2, 493, 200);
LobotSerialServoMove(3, 551, 200);
LobotSerialServoMove(4, 443, 200);
LobotSerialServoMove(5, 496, 200);
LobotSerialServoMove(6, 496, 200);
LobotSerialServoMove(7, 504, 200);
LobotSerialServoMove(8, 615, 200);
LobotSerialServoMove(9, 570, 200);
LobotSerialServoMove(10, 582, 200);
delay_ms(205);

// #1 P495 #2 P498 #3 P508 #4 P495 #5 P496 #6 P499 #7 P504 #8 P540 #9 P581 #10 P505
LobotSerialServoMove(1, 495, 200);
LobotSerialServoMove(2, 498, 200);
LobotSerialServoMove(3, 508, 200);
LobotSerialServoMove(4, 495, 200);
LobotSerialServoMove(5, 496, 200);
LobotSerialServoMove(6, 499, 200);
LobotSerialServoMove(7, 504, 200);
LobotSerialServoMove(8, 540, 200);
LobotSerialServoMove(9, 581, 200);
LobotSerialServoMove(10, 505, 200);
delay_ms(205);

// #1 P499 #2 P498 #3 P502 #4 P496 #5 P499 #6 P499 #7 P504 #8 P501 #9 P503 #10 P505
LobotSerialServoMove(1, 499, 100);
LobotSerialServoMove(2, 498, 100);
LobotSerialServoMove(3, 502, 100);
LobotSerialServoMove(4, 496, 100);
LobotSerialServoMove(5, 499, 100);
LobotSerialServoMove(6, 499, 100);
LobotSerialServoMove(7, 504, 100);
LobotSerialServoMove(8, 501, 100);
LobotSerialServoMove(9, 503, 100);
LobotSerialServoMove(10, 505, 100);
delay_ms(105);

}
void zuozhuan1031_rubbish(void)
{
	// #1 P482 #2 P450 #3 P502 #4 P502 #5 P498 #6 P502 #7 P540 #8 P425 #9 P388 #10 P525
LobotSerialServoMove(1, 482, 200);
LobotSerialServoMove(2, 450, 200);
LobotSerialServoMove(3, 502, 200);
LobotSerialServoMove(4, 502, 200);
LobotSerialServoMove(5, 498, 200);
LobotSerialServoMove(6, 502, 200);
LobotSerialServoMove(7, 540, 200);
LobotSerialServoMove(8, 425, 200);
LobotSerialServoMove(9, 388, 200);
LobotSerialServoMove(10, 525, 200);
delay_ms(205);

// #1 P475 #2 P470 #3 P545 #4 P440 #5 P498 #6 P498 #7 P501 #8 P429 #9 P445 #10 P557
LobotSerialServoMove(1, 475, 125);
LobotSerialServoMove(2, 470, 125);
LobotSerialServoMove(3, 545, 125);
LobotSerialServoMove(4, 440, 125);
LobotSerialServoMove(5, 498, 125);
LobotSerialServoMove(6, 498, 125);
LobotSerialServoMove(7, 501, 125);
LobotSerialServoMove(8, 429, 125);
LobotSerialServoMove(9, 445, 125);
LobotSerialServoMove(10, 557, 125);
delay_ms(130);

// #1 P475 #2 P470 #3 P502 #4 P395 #5 P498 #6 P498 #7 P490 #8 P470 #9 P445 #10 P557
LobotSerialServoMove(1, 475, 50);
LobotSerialServoMove(2, 470, 50);
LobotSerialServoMove(3, 502, 50);
LobotSerialServoMove(4, 395, 50);
LobotSerialServoMove(5, 498, 50);
LobotSerialServoMove(6, 498, 50);
LobotSerialServoMove(7, 490, 50);
LobotSerialServoMove(8, 470, 50);
LobotSerialServoMove(9, 445, 50);
LobotSerialServoMove(10, 557, 50);
delay_ms(55);

// #1 P475 #2 P470 #3 P503 #4 P424 #5 P496 #6 P499 #7 P501 #8 P495 #9 P498 #10 P558
LobotSerialServoMove(1, 475, 100);
LobotSerialServoMove(2, 470, 100);
LobotSerialServoMove(3, 503, 100);
LobotSerialServoMove(4, 424, 100);
LobotSerialServoMove(5, 496, 100);
LobotSerialServoMove(6, 499, 100);
LobotSerialServoMove(7, 501, 100);
LobotSerialServoMove(8, 495, 100);
LobotSerialServoMove(9, 498, 100);
LobotSerialServoMove(10, 558, 100);
delay_ms(105);

// #1 P475 #2 P470 #3 P503 #4 P424 #5 P496 #6 P499 #7 P525 #8 P670 #9 P585 #10 P605
LobotSerialServoMove(1, 475, 200);
LobotSerialServoMove(2, 470, 200);
LobotSerialServoMove(3, 503, 200);
LobotSerialServoMove(4, 424, 200);
LobotSerialServoMove(5, 496, 200);
LobotSerialServoMove(6, 499, 200);
LobotSerialServoMove(7, 525, 200);
LobotSerialServoMove(8, 670, 200);
LobotSerialServoMove(9, 585, 200);
LobotSerialServoMove(10, 605, 200);
delay_ms(205);

// #1 P475 #2 P450 #3 P475 #4 P556 #5 P499 #6 P501 #7 P544 #8 P566 #9 P600 #10 P470
LobotSerialServoMove(1, 475, 125);
LobotSerialServoMove(2, 450, 125);
LobotSerialServoMove(3, 475, 125);
LobotSerialServoMove(4, 556, 125);
LobotSerialServoMove(5, 499, 125);
LobotSerialServoMove(6, 501, 125);
LobotSerialServoMove(7, 544, 125);
LobotSerialServoMove(8, 566, 125);
LobotSerialServoMove(9, 600, 125);
LobotSerialServoMove(10, 470, 125);
delay_ms(130);

// #1 P475 #2 P450 #3 P475 #4 P556 #5 P499 #6 P501 #7 P544 #8 P566 #9 P560 #10 P490
LobotSerialServoMove(1, 475, 50);
LobotSerialServoMove(2, 450, 50);
LobotSerialServoMove(3, 475, 50);
LobotSerialServoMove(4, 556, 50);
LobotSerialServoMove(5, 499, 50);
LobotSerialServoMove(6, 501, 50);
LobotSerialServoMove(7, 544, 50);
LobotSerialServoMove(8, 566, 50);
LobotSerialServoMove(9, 560, 50);
LobotSerialServoMove(10, 490, 50);
delay_ms(55);

// #1 P482 #2 P450 #3 P504 #4 P556 #5 P456 #6 P502 #7 P577 #8 P513 #9 P532 #10 P475
LobotSerialServoMove(1, 482, 100);
LobotSerialServoMove(2, 450, 100);
LobotSerialServoMove(3, 504, 100);
LobotSerialServoMove(4, 556, 100);
LobotSerialServoMove(5, 456, 100);
LobotSerialServoMove(6, 502, 100);
LobotSerialServoMove(7, 577, 100);
LobotSerialServoMove(8, 513, 100);
LobotSerialServoMove(9, 532, 100);
LobotSerialServoMove(10, 475, 100);
delay_ms(105);

}