//----------------//----------------//----------------//----------------//----------------//
//Global variables//Global variables//Global variables//Global variables//Global variables//
//----------------//----------------//----------------//----------------//----------------//
int sensor1Anode = D2;
int sensor1Katode = D3;
int sensor2Anode = D4;
int sensor2Katode = D5;
int sensor3Anode = D6;
int sensor3Katode = D7;
int imOkWire = D8;
int sensorNumGRP1 = D9;
int sensorNumGRP2 = D10;
int sensorErrorType = D11;

//------------//------------//------------//------------//------------//------------//------------//
//Global setup//Global setup//Global setup//Global setup//Global setup//Global setup//Global setup//
//------------//------------//------------//------------//------------//------------//------------//

void setup() {
  sensor1Anode == 0;
  sensor1Katode == 0;
  sensor2Anode == 0;
  sensor2Katode == 0;
  sensor3Anode == 0;
  sensor3Katode == 0;
  imOkWire == 0;
  sensorNumGRP1 == 0;
  sensorNumGRP2 == 0;
  sensorErrorType == 0;

  pinMode (sensor1Anode, INPUT);
  pinMode (sensor1Katode, INPUT);
  pinMode (sensor2Anode, INPUT);
  pinMode (sensor2Katode, INPUT);
  pinMode (sensor3Anode, INPUT);
  pinMode (sensor3Katode, INPUT);
  pinMode (imOkWire, OUTPUT);
  pinMode (sensorNumGRP1, OUTPUT);
  pinMode (sensorNumGRP2, OUTPUT);
  pinMode (sensorErrorType, OUTPUT);

//----//----//----//----//----//----//----//----//----//----//----//----//----//----//----//----//----//
//Main//Main//Main//Main//Main//Main//Main//Main//Main//Main//Main//Main//Main//Main//Main//Main//Main//
//----//----//----//----//----//----//----//----//----//----//----//----//----//----//----//----//----//

}

void loop() {
  // put your main code here, to run repeatedly:

}

//------------------//------------------//------------------//------------------//------------------//
//Function libraries//Function libraries//Function libraries//Function libraries//Function libraries//
//------------------//------------------//------------------//------------------//------------------//
