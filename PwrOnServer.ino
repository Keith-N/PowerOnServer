/*
 * Keith Nason
 * Power on server
 * 7/13/16
 * - Power on server when power returns after outage
 * 
 */

#define hold 300     // Hold time for switch/pin
#define wait 10000    // Wait time before attempting to power on


// pwrPin connected to switch, ledPin as indicator of when active
#define pwrPin 2       // Pin 2 connected as switch
#define ledPin 13

void setup() {

  
digitalWrite(pwrPin, HIGH);
digitalWrite(ledPin, LOW);        // Set the initial state of the pins before pinMode, prevent triggering power up before ready 
                               
pinMode(pwrPin, OUTPUT);
pinMode(ledPin, OUTPUT);
  
delay(wait);                     
                   
digitalWrite(pwrPin, LOW);
digitalWrite(ledPin, HIGH);        // Power on server, pull mobo PWR pin low

delay(hold);                   

digitalWrite(pwrPin, HIGH);
digitalWrite(ledPin, LOW);        // Pull PWR pin high
}


void loop(){
  //Needed for compile, server power already set during setup
}


