//----------------//----------------//----------------//----------------//----------------//
//Global variables//Global variables//Global variables//Global variables//Global variables//
//----------------//----------------//----------------//----------------//----------------//
int sensor1HL = D38;
int signal1HL = D39;
int sensor2HL = D40;
int signal2HL = D41;
int sensor3HL = D42;
int signal3HL = D43;
int imOkWire = D44;
int sensorNumGRP1 = D45;
int sensorNumGRP2 = D46;
int sensorErrorType = D47;
int rxTxMegaNano = D48;

//------------//------------//------------//------------//------------//------------//------------//
//Global setup//Global setup//Global setup//Global setup//Global setup//Global setup//Global setup//
//------------//------------//------------//------------//------------//------------//------------//

void setup() {
  sensor1HL == 0;
  signal1HL == 0;
  sensor2HL == 0;
  signal2HL == 0;
  sensor3HL == 0;
  signal3HL == 0;
  imOkWire == 0;
  sensorNumGRP2 == 0;
  sensorNumGRP2 == 0;
  sensorErrorType == 0;
  rxTxMegaNano == 0;

  pinMode (sensor1HL, OUTPUT);
  pinMode (signal1HL, INPUT);
  pinMode (sensor2HL, OUTPUT);
  pinMode (signal2HL, INPUT);
  pinMode (sensor3HL, OUTPUT);
  pinMode (signal3HL, INPUT);
  pinMode (imOkWire, INPUT);
  pinMode (sensorNumGRP1, INPUT);
  pinMode (sensorNumGRP2, INPUT);
  pinMode (sensorErrorType, INPUT);
  pinMode (rxTxMegaNano, OUTPUT);

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
