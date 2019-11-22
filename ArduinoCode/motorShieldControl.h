#ifndef MOTORSHIELDH
#define MOTORSHIELDH




// change to const ints?
#define encPinL  4 // TODO: Get correct port
#define encPinR  3 // TODO: Get correct port
#define servoPin 9 // TODO: Get correct pin

// init constansts. Change into #defines?
#define circum 20 // TODO: get correct value
#define statesPerRotation 40
#define distancePerStep circum/statesPerRotation
#define statesPerCentimeter statesPerRotation/circum
#define statesPerDegree 10 //TODO: Get Correct value

// use this to find out dir in turns
#define RIGHT 0
#define LEFT 1

// predef funcs
void init(); //initialize motor shield and servo
void rightMotor(int dir, int pwm); // turn on right motor
void leftMotor(int dir, int pwm); //turn on left motor
void porportionalTurn(int dir, int rpwm, int lpwm); //Does a porportional turn
void startEncoders(); // Start/reset encoders to be used
float* getCentimeters(); // get amount of centimeters moved since startEncoders() was called
float getDegrees(); // get amount of degrees turned since startEncoders() was called
void straight(int cent, int pwm); // go straight an amount of centimeters
void backward(int cent, int pwm); // ditto above but backwards
void pointTurn(int dir, int ang, int pwm); // Do a point turn left or right a certain number of degrees
void turnServo(int deg); // set the servo to a certain degree.



#endif
