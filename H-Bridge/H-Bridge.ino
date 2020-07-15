
// Transistor MOSFET - IRF540
 
int NMOS1=11; // npn MOSFET 1 gate pin;
int NMOS2=5; //  npn MOSFET 2 gate pin;
int PMOS1=10;//  pnp MOSFET 1 gate pin;
int PMOS2=6; //  pnp MOSFET 2 gate pin;
void setup()
{
 
}

void loop()
{
  
  digitalWrite(PMOS1, 0);
  digitalWrite(PMOS2, 1);
  digitalWrite(NMOS1, 1);
  digitalWrite(NMOS2, 0);
  delay(5000);
  digitalWrite(PMOS1, 1);
  digitalWrite(PMOS2, 0);
  digitalWrite(NMOS1, 0);
  digitalWrite(NMOS2, 1);
  delay(5000);

}
