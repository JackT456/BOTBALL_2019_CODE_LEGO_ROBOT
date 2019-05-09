#include <kipr/botball.h>


//Problem - Only happened once but, when the arm grabbed onto the gas valve and brought it up. The arm was bringing the 'bot down. 
//was fixed by moving weight to back




int main()
{
    enable_servos();
    set_servo_position(0,732);
 	msleep(1100);
    motor(0,-100);
    motor(3,100);
    msleep(580);
    motor(0,100);
    motor(3,100);
    msleep(1000);

    while(1){
      if(analog(0)>=3000 && analog(0)<=3500){
          	motor(3,50);
          	motor(0,50);
          	msleep(2450);

            motor(3,0);
            motor(0,70);
   			msleep(1659);
          	break;
     }
       else{
       	motor(0,100);
        motor(3,105);
       }
     /*if(analog(0)>=250 && analog(0)<290){
            motor(0,0);
            motor(3,70);
        }
      if(analog(0)>=100 && analog(0)<= 185){
            motor(0,70);
            motor(3,0);
      }*/
  }
    motor(3,94);
    motor(0,90);
    msleep(3540);
    ///set_servo_position(0,1400);
    ///msleep(1400);
    ///set_servo_position(0,1192);
    motor(3,90);
    motor(0,91);
    msleep(750);
    while(2){
        if(analog(0)>=3000 && analog(0)<=3500){
            motor(0,0);
            motor(3,0);		
            msleep(300);
            //stops so that everything can go smoothly
            motor(0,50);
            motor(3,50);
            msleep(440);
            //goes back, in preperation to turn
            motor(0,40);
            motor(3,-40);
            msleep(1551);
            //UP-Note:turns too much(?)
            motor(0,0);
            motor(3,0);
            msleep(350);
            motor(0,50);
            motor(3,50);
            msleep(1300);
            ao();
            //turns to the left, in preperation of "The Arm"
            enable_servos();
            msleep(3000);
            set_servo_position(2,325);
            msleep(300);
            set_servo_position(1,1896);
            msleep(300);
            set_servo_position(0,1840);
            msleep(500);
            set_servo_position(1,1896);
            msleep(500);
            ///_servo_position(0,2015);
            //seep(1500);
            set_servo_position(1,1896);
            msleep(500);
            set_servo_position(2,1278);
            msleep(800); 
            set_servo_position(0,1180);
            msleep(2000);
            set_servo_position(1,766);
            msleep(300);
            //NEXT- The Arm moves down, grabs onto the valve, picks it up
            
            //NEXT- The robot moves forward(slowly) until it read blue [OR] it simply turns(slowly)
            
            //THE NEXT FEW STEPS TAKE PLACE SLOWLY, IN HOPES OF NOT DROPPING THE VALVE
            motor(3,0);
            motor(0,70);
            msleep(1690);
            //NEXT- The robot turns to the left
            motor(0,70);
            motor(3,70);
            msleep(3500);
            //NEXT- The robot moves forward, until it reads black
            
            //NEXT- The robot stops, turns to the left
            break;
        }
           else{
            motor(0,0);
            motor(3,0);		
            msleep(300);
            //stops so that everything can go smoothly
            motor(0,50);
            motor(3,50);
            msleep(110);
            //goes back, in preperation to turn
            motor(0,40);
            motor(3,-40);
            msleep(1499);
            motor(0,0);
            motor(3,0);
            msleep(350);
            motor(0,50);
            motor(3,50);
            msleep(1200);
            ao();
            //turns to the left, in preperation of "The Arm"
            enable_servos();
            msleep(3000);
            set_servo_position(2,325);
            msleep(300);
            set_servo_position(1,1896);
            msleep(300);
            set_servo_position(0,1840);
            msleep(500);
            set_servo_position(1,1896);
            msleep(500);
         // set_servo_position(0,2015);
          //msleep(1500);
            set_servo_position(1,1896);
            msleep(500);
            set_servo_position(2,1278);
            msleep(800); 
            set_servo_position(0,1120);
            msleep(2000);
            set_servo_position(1,766);
            msleep(300);
               
               
            //turns
            motor(3,0);
            motor(0,70);
            msleep(1710);
            //NEXT- The robot turns to the left
            motor(0,70);
            motor(3,70);
            msleep(3500);             
       		break;
           }
    }
     while(3) {
            if((analog(0)>=3000 && analog(0)<=3500) || (analog (1) >=300)){
                motor(0, 70);
                motor(3, 70);
                msleep(1750);
                motor(0, 0);
                motor(3, 70);
                msleep(1850);
                motor(0,50);
                motor(3,50);
                msleep(3250);
                set_servo_position(0,510);
                motor(0, -55);
                motor(3, -55);
                msleep(2700);
            	break;
            }
            else {
            motor(0, 100);
            motor(3, 100);
            }
            
     }
      while(4) {
          set_servo_position(2, 300);
          msleep(500);
          set_servo_position(0,350);
          motor(3, 50);
          motor(0, 50);
          msleep(5000);
          break;
          
      }
    motor(3,-100);
    motor(0,100);
    msleep(1300);
	motor(0,100);
    motor(3,100);
    msleep(3700);

    return 0;
}

