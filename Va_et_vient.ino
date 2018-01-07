// Programme de va et vient pour train miniature
// Le signal est sur la sortie broche
byte broche = 4 ;
unsigned int T_periode ;
int Val_pot ;
void setup ()
{
  pinMode (broche, OUTPUT) ;
}
void loop ()
{
  Val_pot = analogRead (0) ;
  T_periode = map(Val_pot, 0, 1023, 25000, 50000) ;  // mini 25 s maxi 50 s
  digitalWrite (broche, HIGH) ;
  delay (T_periode) ;
  digitalWrite (broche, LOW) ;
  delay (T_periode) ;
}

