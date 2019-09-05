# include<stdio.h>

int celtofar(){
	float x,y;
		printf("enter your celcious valuve : ");
		scanf("%f",&x);
		y=(x*9/5)+32;
		printf("Fahernheit value of %.2f is %.2f\n",x,y);
	return 0;
}

int celtokel(){
	float x,y;
		printf("enter your celcious valuve : ");
		scanf("%f",&x);
		y=x+273.15;
		printf("Kelvin value of %.2f is %.2f\n",x,y);
	return 0;
}

int fartocel(){
	float x,y;
		printf("enter your Fahernheit valuve : ");
		scanf("%f",&x);
		y=(x-32)*5/9;
		printf("celcious value of %.2f is %.2f\n",x,y);
	return 0;
}

int fartokel(){
	float x,y;
		printf("enter your Fahernheit valuve : ");
		scanf("%f",&x);
		y=(x-32)*5/9+273.15;
		printf("Kelvin value of %.2f is %.2f\n",x,y);
	return 0;
}

int keltocel(){
	float x,y;
		printf("enter your Kelvin valuve : ");
		scanf("%f",&x);
		y=x-273.15;
		printf("celcious value of %.2f is %.2f\n",x,y);
	return 0;
}

int keltofar(){
	float x,y;
		printf("enter your Kelvin valuve : ");
		scanf("%f",&x);
		y=(x-273.15)*9/5+32;
		printf("Fahernheit value of %.2f is %.2f\n",x,y);
	return 0;
}


int kmtom(){
	float x,y;
		printf("enter your Kilometer valuve : ");
		scanf("%f",&x);
		y=x*1000;
		printf("Metre value of %.2f is %.2f\n",x,y);
	return 0;
}

int kmtocm(){
	float x,y;
		printf("enter your Kilometer valuve : ");
		scanf("%f",&x);
		y=x*100000;
		printf("Centemeter value of %.2f is %.2f\n",x,y);
	return 0;
}

int kmtomile(){
	float x,y;
		printf("enter your Kilometer valuve : ");
		scanf("%f",&x);
		y=x/1.609;
		printf("Mile value of %.2f is %.2f\n",x,y);
	return 0;
}

int kmtofoot(){
	float x,y;
		printf("enter your Kilometer valuve : ");
		scanf("%f",&x);
		y=x*3280.84;
		printf("Foot value of %.2f is %.2f\n",x,y);
	return 0;
}

int kmtoinch(){
	float x,y;
		printf("enter your Kilometer valuve : ");
		scanf("%f",&x);
		y=x*39370.079;
		printf("Inch value of %.2f is %.2f\n",x,y);
	return 0;
}

int mtokm(){
	float x,y;
		printf("enter your Meter valuve : ");
		scanf("%f",&x);
		y=x/1000;
		printf("Kiloeter value of %.2f is %.2f\n",x,y);
	return 0;
}

int mtocm(){
	float x,y;
		printf("enter your Meter valuve : ");
		scanf("%f",&x);
		y=x*100;
		printf("Centimeter value of %.2f is %.2f\n",x,y);
	return 0;
}

int mtomile(){
	float x,y;
		printf("enter your Meter valuve : ");
		scanf("%f",&x);
		y=x/1609.344;
		printf("Mile value of %.2f is %.2f\n",x,y);
	return 0;
}

int mtofoot(){
	float x,y;
		printf("enter your Meter valuve : ");
		scanf("%f",&x);
		y=x*3.281;
		printf("Foot value of %.2f is %.2f\n",x,y);
	return 0;
}

int mtoinch(){
	float x,y;
		printf("enter your Meter valuve : ");
		scanf("%f",&x);
		y=x*39.37;
		printf("Inch value of %.2f is %.2f\n",x,y);
	return 0;
}

int cmtokm(){
	float x,y;
		printf("enter your Centimetre valuve : ");
		scanf("%f",&x);
		y=x/100000;
		printf("Kilometre value of %.2f is %.2f\n",x,y);
	return 0;
}

int cmtom(){
	float x,y;
		printf("enter your Centimetre valuve : ");
		scanf("%f",&x);
		y=x/100;
		printf("Metre value of %.2f is %.2f\n",x,y);
	return 0;
}

int cmtomile(){
	float x,y;
		printf("enter your Centimetre valuve : ");
		scanf("%f",&x);
		y=x/160934.4;
		printf("Mile value of %.2f is %.2f\n",x,y);
	return 0;
}

int cmtofoot(){
	float x,y;
		printf("enter your Centimetre valuve : ");
		scanf("%f",&x);
		y=x/30.48;
		printf("Foot value of %.2f is %.2f\n",x,y);
	return 0;
}

int cmtoinch(){
	float x,y;
		printf("enter your Centimetre valuve : ");
		scanf("%f",&x);
		y=x/2.54;
		printf("Inch value of %.2f is %.2f\n",x,y);
	return 0;
}

int miletokm(){
	float x,y;
		printf("enter your Mile valuve : ");
		scanf("%f",&x);
		y=x*1.609;
		printf("Kilometre value of %.2f is %.2f\n",x,y);
	return 0;
}

int miletom(){
	float x,y;
		printf("enter your Mile valuve : ");
		scanf("%f",&x);
		y=x*1609.344;
		printf("Metre value of %.2f is %.2f\n",x,y);
	return 0;
}

int miletocm(){
	float x,y;
		printf("enter your Mile valuve : ");
		scanf("%f",&x);
		y=x*160934.4;
		printf("Centimetre value of %.2f is %.2f\n",x,y);
	return 0;
}

int miletofoot(){
	float x,y;
		printf("enter your Mile valuve : ");
		scanf("%f",&x);
		y=x*5280;
		printf("Foot value of %.2f is %.2f\n",x,y);
	return 0;
}

int miletoinch(){
	float x,y;
		printf("enter your Mile valuve : ");
		scanf("%f",&x);
		y=x*63360;
		printf("Inch value of %.2f is %.2f\n",x,y);
	return 0;
}

int foottokm(){
	float x,y;
		printf("enter your Foot valuve : ");
		scanf("%f",&x);
		y=x/3280.84;
		printf("Kilometre value of %.2f is %.2f\n",x,y);
	return 0;
}

int foottom(){
	float x,y;
		printf("enter your Foot valuve : ");
		scanf("%f",&x);
		y=x/3.281;
		printf("Metre value of %.2f is %.2f\n",x,y);
	return 0;
}

int foottocm(){
	float x,y;
		printf("enter your Foot valuve : ");
		scanf("%f",&x);
		y=x*30.48;
		printf("Centimetre value of %.2f is %.2f\n",x,y);
	return 0;
}

int foottomile(){
	float x,y;
		printf("enter your Foot valuve : ");
		scanf("%f",&x);
		y=x/5280;
		printf("Mile value of %.2f is %.2f\n",x,y);
	return 0;
}

int foottoinch(){
	float x,y;
		printf("enter your Foot valuve : ");
		scanf("%f",&x);
		y=x*12;
		printf("Inch value of %.2f is %.2f\n",x,y);
	return 0;
}

int inchtokm(){
	float x,y;
		printf("enter your Inch valuve : ");
		scanf("%f",&x);
		y=x/39370.079;
		printf("Kilometre value of %.2f is %.2f\n",x,y);
	return 0;
}

int inchtom(){
	float x,y;
		printf("enter your Inch valuve : ");
		scanf("%f",&x);
		y=x/39.37;
		printf("Metre value of %.2f is %.2f\n",x,y);
	return 0;
}

int inchtocm(){
	float x,y;
		printf("enter your Inch valuve : ");
		scanf("%f",&x);
		y=x*2.54;
		printf("Centimetre value of %.2f is %.2f\n",x,y);
	return 0;
}

int inchtomile(){
	float x,y;
		printf("enter your Inch valuve : ");
		scanf("%f",&x);
		y=x/63360;
		printf("Mile value of %.2f is %.2f\n",x,y);
	return 0;
}

int inchtofoot(){
	float x,y;
		printf("enter your Inch valuve : ");
		scanf("%f",&x);
		y=x/12;
		printf("Foot value of %.2f is %.2f\n",x,y);
	return 0;
}


int kgtog(){
	float x,y;
		printf("enter your Kilogram valuve : ");
		scanf("%f",&x);
		y=x*1000;
		printf("Gram value of %.2f is %.2f\n",x,y);
	return 0;
}

int kgtomg(){
	float x,y;
		printf("enter your Kilogram valuve : ");
		scanf("%f",&x);
		y=x*1000000;
		printf("Miligram value of %.2f is %.2f\n",x,y);
	return 0;
}

int gtokg(){
	float x,y;
		printf("enter your Gram valuve : ");
		scanf("%f",&x);
		y=x/1000;
		printf("Kiloram value of %.2f is %.2f\n",x,y);
	return 0;
}

int gtomg(){
	float x,y;
		printf("enter your Gram valuve : ");
		scanf("%f",&x);
		y=x*1000;
		printf("Miliram value of %.2f is %.2f\n",x,y);
	return 0;
}

int mgtokg(){
	float x,y;
		printf("enter your Miligram valuve : ");
		scanf("%f",&x);
		y=x/1000000;
		printf("Kilogram value of %.2f is %.2f\n",x,y);
	return 0;
}

int mgtog(){
	float x,y;
		printf("enter your Miligram valuve : ");
		scanf("%f",&x);
		y=x/1000;
		printf("Gram value of %.2f is %.2f\n",x,y);
	return 0;
}

