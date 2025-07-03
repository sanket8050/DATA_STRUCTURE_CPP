void delay(){
	int i,j;
	for(i=0;i<500;i++)
	for(j=0;j<7100;j++);
}

void main(){

	while(1){
		if(PORTB.bits.RB0==0){
           while(1){
			PORTCbits.RC1=1;
			PORTCbits.RC0=1;

			PORTB=0x80;delay();
			PORTB=0x40;delay();
			PORTB=0x20;delay();
			PORTB=0x10;delay();
			if(PORTBbits.RB1==1)break;
		   }
		}

		else if(PORTCbits.RC0==1){
			PORTC=0x10;delay();
			PORTC=0x20;delay();
			PORTC=0x40;delay();
			PORTC=0x80;delay();

			PORT
			if(PORTCbits.RC0==0)break;
		}
	}

}