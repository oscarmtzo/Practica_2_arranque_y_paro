#include <16f84a.h>
// eliminamos de #fuses los siguientes: brownout y nolvp
#fuses hs, nowdt, noput, noprotect
#use delay(clock=4000000)
// #use fast_io(b)
#USE standard_io(a)

void main ()
{
   output_low(PIN_b7);   // pin de salida
   output_high(PIN_a2);   // boton arranque de entrada
   output_high(PIN_a3);   // boton paro de entrada
   
   while (true){
      if( input(PIN_a2) == 1 ){
            OUTPUT_HIGH(PIN_b7);
         }
      if (input(PIN_a3) == 1 ) {
         OUTPUT_LOW(PIN_b7);
      }

      }
}
