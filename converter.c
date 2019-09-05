#include<stdio.h>
#include<stdlib.h>
#include "unitconvert.h"

int main(){
	char category, enter, selection;
	int a;
	
	do{
	
		printf("Enter the number of your selection\n 1.temperature\n 2.length\n 3.weight\n");
		printf("\nEnter your category selection : ");
		scanf(" %c",&category);
		
			switch(category){
				
				case '1' :
					printf("\nEnter the number of your selection of unit whitch you enter the value\n 1.Celsius\n 2.Fahernheit\n 3.Kelvin\n");
					printf("\nEnter your unit selection : ");
					scanf(" %c",&enter);
					
					printf("\nEnter the number of your selection of unit whitch you want to get the value\n 1.Celsius\n 2.Fahernheit\n 3.Kelvin\n");
					printf("\nEnter your unit selection : ");
					scanf(" %c",&selection);	
					
						switch(enter){
							case '1' :
								switch(selection){
									case '2' :
										celtofar();
										break;
									case '3' :
										celtokel();
										break;
									default :
										printf("Invalied selection\n");
								}
								break;
							case '2' :
									switch(selection){
									case '1' :
										fartocel();
										break;
									case '3' :
										fartokel();
										break;
									default :
										printf("Invalied selection\n");
								}
								break;
							case '3' :
									switch(selection){
									case '1' :
										keltocel();
										break;
									case '2' :
										keltofar();
										break;
									default :
										printf("Invalied selection\n");
								}
								break;
							default :
								printf("Invalied selection\n");
						}
					break;
						
				case '2' :
					printf("\nEnter the number of your selection of unit whitch you enter the value\n 1.Kilometer\n 2.Meter\n 3.Centimeter\n 4.Mile\n 5.Foot\n 6.Inch\n");
					printf("\nEnter your unit selection : ");
					scanf(" %c",&enter);
					
					printf("\nEnter the number of your selection of unit whitch you want to get the value\n 1.Kilometer\n 2.Meter\n 3.Centimeter\n 4.Mile\n 5.Foot\n 6.Inch\n");
					printf("\nEnter your unit selection : ");
					scanf(" %c",&selection);
					
						switch(enter){
							case '1' :
								switch(selection){
									case '2' :
										kmtom();
										break;
									case '3' :
										kmtocm();
										break;
									case '4' :
										kmtomile();
										break;
									case '5' :
										kmtofoot();
										break;
									case '6' :
										kmtoinch();
										break;
									default :
										printf("Invalied selection\n");
								}
									break;
							case '2' :
								switch(selection){
									case '1' :
										mtokm();
										break;
									case '3' :
										mtocm();
										break;
									case '4' :
										mtomile();
										break;
									case '5' :
										mtofoot();
										break;
									case '6' :
										mtoinch();
										break;
									default :
										printf("Invalied selection\n");
								}
									break;
							case '3' :
								switch(selection){
									case '1' :
										cmtokm();
										break;
									case '2' :
										cmtom();
										break;
									case '4' :
										cmtomile();
										break;
									case '5' :
										cmtofoot();
										break;
									case '6' :
										cmtoinch();
										break;
									default :
										printf("Invalied selection\n");
								}
									break;
							case '4' :
								switch(selection){
									case '1' :
										miletokm();
										break;
									case '2' :
										miletom();
										break;
									case '3' :
										miletocm();
										break;
									case '5' :
										miletofoot();
										break;
									case '6' :
										miletoinch();
										break;
									default :
										printf("Invalied selection\n");
								}
									break;
							case '5' :
								switch(selection){
									case '1' :
										foottokm();
										break;
									case '2' :
										foottom();
										break;
									case '3' :
										foottocm();
										break;
									case '4' :
										foottomile();
										break;
									case '6' :
										foottoinch();
										break;
									default :
										printf("Invalied selection\n");
								}
									break;
							case '6' :
								switch(selection){
									case '1' :
										inchtokm();
										break;
									case '2' :
										inchtom();
										break;
									case '3' :
										inchtocm();
										break;
									case '4' :
										inchtomile();
										break;
									case '5' :
										inchtofoot();
										break;
									default :
										printf("Invalied selection\n");
								}
									break;
							default :
								printf("Invalied selection\n");
						}
					break;
						
				case '3' :
					printf("\nEnter the number of your selection of unit whitch you enter the value\n 1.Kilogrm\n 2.Gram\n 3.Miligram\n");
					printf("\nEnter your unit selection : ");
					scanf(" %c",&enter);
					
					printf("\nEnter the number of your selection of unit whitch you want to get the value\n 1.Kilogrm\n 2.Gram\n 3.Miligram\n");
					printf("\nEnter your unit selection : ");
					scanf(" %c",&selection);
					
						switch(enter){
							case '1' :
								switch(selection){
									case '2' :
										kgtog();
										break;
									case '3' :
										kgtomg();
										break;
									default :
										printf("Invalied selection\n");
								}
								break;
							case '2' :
									switch(selection){
									case '1' :
										gtokg();
										break;
									case '3' :
										gtomg();
										break;
									default :
										printf("Invalied selection\n");
								}
								break;
							case '3' :
									switch(selection){
									case '1' :
										mgtokg();
										break;
									case '2' :
										mgtog();
										break;
									default :
										printf("Invalied selection\n");
								}
							default :
								printf("Invalied selection\n");
						}
					break;
								
				default :
					printf("Invalied selection\n");
			}
			printf("\n");
			printf("****************************************************************************************************\n");
			printf("\n");
			printf("enter 1 for continue : ");
			scanf("%d",&a);
	}while(a==1);

	return 0;
}



