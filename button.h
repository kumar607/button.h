void delay_ms(short x) {
    for (int i = 0; i < x; i++) {
        __delay_ms(1);
    }
}
/*void delay_us(short x) {
    for (int i = 0; i < x; i++) {
        __delay_us(1);
    }
}
*/

unsigned short Button(volatile unsigned char *port, unsigned short pin, short time, unsigned short active_state)
{
    unsigned int b;
    unsigned char c=0x00,d;
    c|=1<<pin;
    d=*port&c;
    if(d>0)d=1;
    else d=0;
    if(d==active_state)
    {
        delay_ms(time);
         b=1;
       }
  else b=0;
    return b;
    }
