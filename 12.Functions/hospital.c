#include<stdio.h>
//patient visit hosptial 
void patient_visit (){
    printf("\n Patient visited hospital\n");
}
void patient_details(){
    printf ("\n Patient Details are gathered succesfullly ...\n");
}
void nursecall(){
    printf("\n  Nurse collect and take patient details file to doctor's table \n");
}
void doctor(){
    printf("\n Doctor Access and see the report of patient \n ");
}
void diagonise (){

    printf("\n Doctor diagonise the  patient's report  for  priscribe the medicine \n");
}
void pharmacy(){
    printf("\n Priscribition is analysed by pharmacist to give proper medicine.\n");
}
void medicine(){
    printf("\n Patient get proper consult and medicine for their report on health \n");
}
int main (){
    // hosptial name
    printf(" Clinic \n Available Time: 6 AM - 10PM \n");
    patient_visit();
    patient_details();
    nursecall();
    doctor();
    diagonise();
    pharmacy();
    medicine();

    return 0;
  } 