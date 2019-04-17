#include <kipr/botball.h>

int main()
{
    enable_servos();
 
    while(1){
      if(analog(0)>=3000 && analog(0)<=3500){
          	motor(3,50);
          	motor(0,50);
          	msleep(2550);

            motor(3,0);
            motor(0,70);
   			msleep(1650);
          	break;
     }
       else{
       	motor(0,100);
        motor(3,100);
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
    motor(3,100);
    motor(0,100);
    msleep(4000);
    while(2){
        if(analog(0)>=3000 && analog(0)<=3500){
            motor(0,0);
            motor(3,0);
            msleep(600);
            //stops so that everything can go smoothly
            motor(0,-50);
            motor(3,-50);
            msleep(1000);
            //goes back, in preperation to turn
            motor(0,50);
            motor(3,0);
            msleep(2000);
            motor(0,0);
            motor(3,0);
            msleep(300);
            motor(0,50);
            motor(3,50);
            msleep(1000);
            ao();
            //turns to the left, in preperation of "The Arm"(UP-ERROR,KEEPS TURNING)
            enable_servos();
            msleep(3000);
            set_servo_position(2,1265);
            msleep(300);
            set_servo_position(0,1232);
            msleep(500);
            set_servo_position(1,1896);
            msleep(500);
            set_servo_position(0,2015);
            msleep(1500);
            set_servo_position(1,1896);
            msleep(500);
            set_servo_position(2,2002);
            msleep(800); 
            set_servo_position(0,1219);
            msleep(2000);
            set_servo_position(1,766);
            msleep(300);
		    //NEXT- The Arm moves down, grabs onto the valve, picks it up
            //NEXT- The robot moves forward(slowly) until it read blue [OR] it simply turns(slowly)
            //THE NEXT FEW STEPS TAKE PLACE SLOWLY, IN HOPES OF NOT DROPPING THE VALVE
            //NEXT- The robot turns to the left
            //NEXT- The robot moves forward, until it reads black
            //NEXT- The robot stops, turns to the left
            break;
        }
    }
                
                
              
   
    return 0;
}
