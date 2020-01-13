int mot1=5;
int mot2=6;
int mot3=9;
int mot4=10;

int exleft_sensor = A4;
int left_sensor = A3;
int centre_sensor = A2;
int right_sensor = A1;
int exright_sensor = A0;
void setup() {
  pinMode(mot1, OUTPUT);
  pinMode(mot2, OUTPUT);
  pinMode(mot3, OUTPUT);
  pinMode(mot4, OUTPUT);
  
  pinMode(exleft_sensor, INPUT);
  pinMode(left_sensor, INPUT);
  pinMode(centre_sensor, INPUT);
  pinMode(right_sensor, INPUT);
  pinMode(exright_sensor, INPUT);
  
    
}

void loop() {
   //serial.begin(9600)
   int a = digitalRead(exleft_sensor);
   int b = digitalRead(left_sensor);
   int c = digitalRead(centre_sensor);
   int d = digitalRead(right_sensor);
   int e = digitalRead(exright_sensor);
   if((a == 0) && (b == 0) && (c == 1) && (d == 0) && (e == 0))
   {
    go_staraight(); 
   }
   if((a == 0) && (b == 1) && (c == 1) && (d == 0) && (e == 0))
   {
     l_turn_left();
   }
   if((a == 1) && (b == 1) && (c == 1) && (d == 0) && (e == 0))
   {
     turn_left();
   }
   if((a == 0) && (b == 0) && (c == 1) && (d == 1) && (e == 0))
   {
     l_turn_right();
   }
   if((a == 0) && (b == 0) && (c == 1) && (d == 1) && (e == 1))
   {
     turn_right();
   }
   if((a == 1) && (b == 1) && (c == 1) && (d == 1) && (e == 1))
   {
     stop_it();
   }
   //serial.println(9600);
   //put your main code here, to run repeatedly;
   void go_straight()
   {
     analogwrite(mot1,240);
     analogwrite(mot2,0);
     analogwrite(mot3,240);
     analogwrite(mot4,0);
   }
   void l_turn_left()
   {
     analogwrite(mot1,150);
     analogwrite(mot2,0);
     analogwrite(mot3,240);
     analogwrite(mot4,0);
   }
   void turn_left()
   {
     analogwrite(mot1,0);
     analogwrite(mot2,0);
     analogwrite(mot3,120);
     analogwrite(mot4,0);
   }
   void l_turn_right()
   {
     analogwrite(mot1,240);
     analogwrite(mot2,0);
     analogwrite(mot3,150);
     analogwrite(mot4,0);
   }
   void turn_right()
   {
     analogwrite(mot1,120);
     analogwrite(mot2,0);
     analogwrite(mot3,0);
     analogwrite(mot4,0);
   }
   void stopit()
   {
     analogwrite(mot1,0);
     analogwrite(mot2,0);
     analogwrite(mot3,0);
     analogwrite(mot14,0);
   }
     
}
