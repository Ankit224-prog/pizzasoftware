#include<iostream>

using namespace std;
int main()
{
    int m1r=99;
    int m1m=219;
    int m1l=419;
    
    int c2r=179;
    int c2m=319;
    int c2l=519;
    
    int c3r=189;
    int c3m=349;
    int c3l=649;
    
    int f4r=199;
    int f4m=349;
    int f4l=569;
    
    int f5r=239;
    int f5m=419;
    int f5l=629;
    
    int m6r=249;
    int m6m=439;
    int m6l=649;
    
    int p7r=219;
    int p7m=319;
    int p7l=419;
    
    int v8r=299;
    int v8m=399;
    int v8l=499;
    
    int c9r=189;
    int c9m=289;
    int c9l=489;
    
    int m10r=239;
    int m10m=419;
    int m10l=629;
    
    int p11r=249;
    int p11m=349;
    int p11l=449;
    
    int c12r=279;
    int c12m=379;
    int c12l=579;
     
     
    int c13r=339;
    int c13m=449;
    int c13l=559;
    
    int n14r=339;
    int n14m=449;
    int n14l=879;
    
    int c15r=349;
    int c15m=459;
    int c15l=549;
    
    
    char size;
    
    int gst=18;
    
    
    
    
    
    int pizza;
    cout<< "..........................P I Z Z E R I A............................" <<endl;
    cout<<"hello,"<<endl;
    cout<<"sir/mam"<< endl;
    cout<<"welcome to pizzeria"<<endl;
    cout<<"Here the menu"<<endl;
    
    cout<<"                               order code   REGULAR  MEDIUM   LARGE" <<endl;
    cout<<"1. MARGHERITA                      01        99        219      419"<<endl;
    cout<<"2. CHEESE N TAMATO                 02        179       319      519"<<endl;
    cout<<"3. CHEESE N CORN                   03        189       349      649"<<endl;
    cout<<"4. FRESH VEGGI                     04        199       349      569"<<endl;
    cout<<"5. FARMHOUSE                       05        239       419      629"<<endl;
    cout<<"6. MEXICAN GREEN WAVE              06        249       439      649"<<endl;
    cout<<"7. PEPPY PANEER                    07        219       319      419"<<endl;
    cout<<"8. VEGGIE PARADISE                 08        299       399      499"<<endl;
    cout<<"9. CHICKEN SAUSAGE                 09        189       289      489"<<endl;
    cout<<"10.MOROCCAN SPICE PASTA PIZZA      10        239       419      629"<<endl;
    cout<<"11.PEPPER BARBECUE CHICKEN         11        249       349      449"<<endl;
    cout<<"12.CHICKEN FIESTA                  12        279       379      579"<<endl;
    cout<<"13.CHICKEN DOMINATOR               13        339       449      559"<<endl;
    cout<<"14.NON VEG SUPREME                 14        339       449      879"<<endl;
    cout<<"15.CHICKEN PEPPERONI               15        349       459      549"<<endl;

cout<<""<<endl;
cout<< "                     E X T R A   T O P P I N G " <<endl;
cout<<""<<endl;
cout<<"                                 order code"<<endl;
cout<<"1.VEGGI TOPPING                   16         99"<<endl;
cout<<"2.ONION                           17         49"<<endl;
cout<<"3.CHESSE                          18         99"<<endl;
cout<<"4.TOMATO                          19         59"<<endl;
cout<<"5.CHEESE BRUST                    20         149"<<endl;
cout<<"6.MUSHROOM                        21         159"<<endl;

cout<<""<<endl;

cout<<".............enter your favourite pizza code......................"<< endl; 
 cin>> pizza;
 switch(pizza){
     case 1:
     
     cout<< "MARGHERITA  "<<endl;
     
     
     cout<<"enter pizza size R/M/L"<<endl;
     cin >> size;
    
     if (size=='r'){
         cout<<"......................................"<<endl;
         cout<<"MARGHERITA PIZZA REGULAR "<<m1r<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='m'){
         cout<<"......................................"<<endl;
         cout<<"MARGHERITA PIZZA MEDIUM 219RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='l'){
         cout<<"......................................"<<endl;
         cout<<"MARGHERITA PIZZA LARGE 419rs"<<endl;
         cout<<"......................................"<<endl;
     }
     break;
     
     case 2:
     cout<< "CHEESE N TAMATO "<<endl;
     cout<<"enter pizza size R/M/L"<<endl;
 
     cin>> size;
     if (size=='r'){
         cout<<"......................................"<<endl;
         cout<<"CHEESE N TAMATO PIZZA REGULAR 179RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='m'){
         cout<<"......................................"<<endl;
         cout<<"CHEESE N TAMATO PIZZA MEDIUM 319RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='l'){
         cout<<"......................................"<<endl;
         cout<<"CHEESE N TAMATO PIZZA LARGE 519rs"<<endl;
         cout<<"......................................"<<endl;
     }
     break;
     
     case 3:
     cout<< "CHEESE N CORN "<<endl;
     cout<<"enter pizza size R/M/L"<<endl;
    
     cin>> size;
     if (size=='r'){
         cout<<"......................................"<<endl;
         cout<<"CHEESE N CORN PIZZA REGULAR 189RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='m'){
         cout<<"......................................"<<endl;
         cout<<"CHEESE N CORN PIZZA MEDIUM 349RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='l'){
         cout<<"......................................"<<endl;
         cout<<"CHEESE N CORN PIZZA LARGE 649rs"<<endl;
         cout<<"......................................"<<endl;
     }
     
     break;
     
     case 4:
     cout<< "FRESH VEGGI "<<endl;
     cout<<"enter pizza size R/M/L"<<endl;
    
     cin>> size;
     if (size=='r'){
         cout<<"......................................"<<endl;
         cout<<"FRESH VEGGI PIZZA REGULAR 199RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='m'){
         cout<<"......................................"<<endl;
         cout<<"FRESH VEGGI PIZZA MEDIUM 349RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='l'){
         cout<<"......................................"<<endl;
         cout<<"FRESH VEGGI PIZZA LARGE 649"<<endl;
         cout<<"......................................"<<endl;
     }
     break;
     
     case 5:
     cout<< "FARMHOUSE  "<<endl;
     cout<<"enter pizza size R/M/L"<<endl;
   
     cin>> size;
     if (size=='r'){
         cout<<"......................................"<<endl;
         cout<<"FARMHOUSE  PIZZA REGULAR 239RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='m'){
         cout<<"......................................"<<endl;
         cout<<"FARMHOUSE  PIZZA MEDIUM 419RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='l'){
         cout<<"......................................"<<endl;
         cout<<"FARMHOUSE  PIZZA LARGE 629rs"<<endl;
         cout<<"......................................"<<endl;
     }
     break;
     
     case 6:
     cout<< "MEXICAN GREEN WAVE "<<endl;
     cout<<"enter pizza size R/M/L"<<endl;
     
     cin>> size;
     if (size=='r'){
         cout<<"......................................"<<endl;
         cout<<"MEXICAN GREEN WAVE PIZZA REGULAR 249RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='m'){
         cout<<"......................................"<<endl;
         cout<<"MEXICAN GREEN WAVE PIZZA MEDIUM 439RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='l'){
         cout<<"......................................"<<endl;
         cout<<"MEXICAN GREEN WAVE PIZZA LARGE 649rs"<<endl;
         cout<<"......................................"<<endl;
     }
     break;
     
     case 7:
     cout<< "PEPPY PANEER "<<endl;
     cout<<"enter pizza size R/M/L"<<endl;
     
     cin>> size;
     if (size=='r'){
         cout<<"......................................"<<endl;
         cout<<"PEPPY PANEER PIZZA REGULAR 219RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='m'){
         cout<<"......................................"<<endl;
         cout<<"PEPPY PANEER PIZZA MEDIUM 319RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='l'){
         cout<<"......................................"<<endl;
         cout<<"PEPPY PANEER PIZZA LARGE 419rs"<<endl;
         cout<<"......................................"<<endl;
     }
     break;
     
     case 8:
     cout<< "VEGGIE PARADISE "<<endl;
     cout<<"enter pizza size R/M/L"<<endl;
     
     cin>> size;
     if (size=='r'){
         cout<<"......................................"<<endl;
         cout<<"VEGGIE PARADISE PIZZA REGULAR 299RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='m'){
         cout<<"......................................"<<endl;
         cout<<"VEGGIE PARADISE PIZZA MEDIUM 399RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='l'){
         cout<<"......................................"<<endl;
         cout<<"VEGGIE PARADISE PIZZA LARGE 519"<<endl;
         cout<<"......................................"<<endl;
     }
     break;
     
     case 9:
     cout<< "CHICKEN SAUSAGE "<<endl;
     cout<<"enter pizza size R/M/L"<<endl;
     
     cin>> size;
     if (size=='r'){
         cout<<"......................................"<<endl;
         cout<<"CHICKEN SAUSAGE PIZZA REGULAR 189RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='m'){
         cout<<"......................................"<<endl;
         cout<<"CHICKEN SAUSAGE PIZZA MEDIUM 289RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='l'){
         cout<<"......................................"<<endl;
         cout<<"CHICKEN SAUSAGE PIZZA LARGE 489"<<endl;
         cout<<"......................................"<<endl;
     }
     break;
     
     case 10:
     cout<< "MOROCCAN SPICE PASTA PIZZA  "<<endl;
     cout<<"enter pizza size R/M/L"<<endl;
     
     cin>> size;
     if (size=='r'){
         cout<<"......................................"<<endl;
         cout<<"MOROCCAN SPICE PASTA PIZZA  REGULAR 239RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='m'){
         cout<<"......................................"<<endl;
         cout<<"MOROCCAN SPICE PASTA PIZZA  MEDIUM 419RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='l'){
         cout<<"......................................"<<endl;
         cout<<"MOROCCAN SPICE PASTA PIZZA LARGE 629"<<endl;
         cout<<"......................................"<<endl;
     }
     break;
     
     case 11:
     cout<< "PEPPER BARBECUE CHICKEN "<<endl;
     cout<<"enter pizza size R/M/L"<<endl;
     
     cin>> size;
     if (size=='r'){
         cout<<"......................................"<<endl;
         cout<<"PEPPER BARBECUE CHICKEN PIZZA REGULAR 249RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='m'){
         cout<<"......................................"<<endl;
         cout<<"PEPPER BARBECUE CHICKEN PIZZA MEDIUM 349RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='l'){
         cout<<"......................................"<<endl;
         cout<<"PEPPER BARBECUE CHICKEN PIZZA LARGE 449"<<endl;
         cout<<"......................................"<<endl;
     }
     break;
     
     case 12:
     cout<< "CHICKEN FIESTA "<<endl;
     cout<<"enter pizza size R/M/L"<<endl;
    
     cin>> size;
     if (size=='r'){
         cout<<"......................................"<<endl;
         cout<<"CHICKEN FIESTA PIZZA REGULAR 279RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='m'){
         cout<<"......................................"<<endl;
         cout<<"CHICKEN FIESTA PIZZA MEDIUM 379RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='l'){
         cout<<"......................................"<<endl;
         cout<<"CHICKEN FIESTA PIZZA LARGE 579rs"<<endl;
         cout<<"......................................"<<endl;
     }
     break;
     
     case 13:
     cout<< "CHICKEN DOMINATOR "<<endl;
     cout<<"enter pizza size R/M/L"<<endl;
     
     cin>> size;
     if (size=='r'){
         cout<<"......................................"<<endl;
         cout<<"CHICKEN DOMINATOR PIZZA REGULAR 339RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='m'){
         cout<<"......................................"<<endl;
         cout<<"CHICKEN DOMINATOR PIZZA MEDIUM 449RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='l'){
         cout<<"......................................"<<endl;
         cout<<"CHICKEN DOMINATOR PIZZA LARGE 559rs"<<endl;
         cout<<"......................................"<<endl;
     }
     break;
     
     case 14:
     cout<< "NON VEG SUPREME "<<endl;
     cout<<"enter pizza size R/M/L"<<endl;
     
     cin>> size;
     if (size=='r'){
         cout<<"......................................"<<endl;
         cout<<"NON VEG SUPREME PIZZA REGULAR 339RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='m'){
         cout<<"......................................"<<endl;
         cout<<"NON VEG SUPREME PIZZA MEDIUM 449RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='l'){
         cout<<"......................................"<<endl;
         cout<<"NON VEG SUPREME PIZZA LARGE 879rs"<<endl;
         cout<<"......................................"<<endl;
     }
     break;
     
     case 15:
     cout<< "CHICKEN PEPPERONI "<<endl;
     cout<<"enter pizza size R/M/L"<<endl;
     
     cin>> size;
     if (size=='r'){
         cout<<"......................................"<<endl;
         cout<<"CHICKEN PEPPERONI PIZZA REGULAR 349RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='m'){
         cout<<"......................................"<<endl;
         cout<<"CHICKEN PEPPERONI PIZZA MEDIUM 459RS"<<endl;
         cout<<"......................................"<<endl;
     }
     else if(size=='l'){
         cout<<"......................................"<<endl;
         cout<<"CHICKEN PEPPERONI PIZZA LARGE 549rs"<<endl;
         cout<<"......................................"<<endl;
     }
 }
    
     
     int topping;
     cout<<"enter topping code"<< endl; 
 cin>> topping;
 switch(topping){
     
     
    case 16:
     cout<< " PIZZA WITH VEGGI TOPPING  "<<endl;
     
     if(size == 'r' && pizza==1){
        int sum = m1r + 99;
         cout << sum<<"rs"<< endl;
     }
      
      else if(size =='m' && pizza==1){
          int sum =m1m +99;
          cout<<sum<<"rs"<<endl;
      }
      else if(size=='l' && pizza==1){
          int sum = m1l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==2){
          int sum = c2r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==2){
          int sum = c2m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==2){
          int sum = c2l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==3){
          int sum = c3r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==3){
          int sum = c3m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==3){
          int sum = c3l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
       else if(size=='r' && pizza==4){
          int sum = f4r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==4){
          int sum = f4m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==4){
          int sum = f4l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
       else if(size=='r' && pizza==5){
          int sum = f5r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==5){
          int sum = f5m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==5){
          int sum = f5l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==6){
          int sum = m6r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==6){
          int sum = m6m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==6){
          int sum = m6l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==7){
          int sum = p7r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==7){
          int sum = p7m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==7){
          int sum = p7l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==8){
          int sum = v8r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==8){
          int sum = v8m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==8){
          int sum = v8l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==9){
          int sum = c9r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==9){
          int sum = c9m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==9){
          int sum = c9l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==10){
          int sum = m10r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==10){
          int sum = m10m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==10){
          int sum = m10l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==11){
          int sum = p11r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==11){
          int sum = p11m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==11){
          int sum = p11l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==12){
          int sum = c12r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==12){
          int sum = c12m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==12){
          int sum = c12l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==13){
          int sum = c13r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==13){
          int sum = c13m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==13){
          int sum = c13l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==14){
          int sum = n14r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==14){
          int sum = n14m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==14){
          int sum = n14l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==15){
          int sum = c15r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==15){
          int sum = c15m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==15){
          int sum = c15l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      break;

      
      int pizza2;
      
      case 17:
     cout<< "PIZZA WITH ONION TOPPING "<<endl;
     
     if(size == 'r' && pizza==1){
        int sum = m1r + 99;
         cout << sum<<"rs"<< endl;
     }
      
      else if(size =='m' && pizza==1){
          int sum =m1m +99;
          cout<<sum<<"rs"<<endl;
      }
      else if(size=='l' && pizza==1){
          int sum = m1l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==2){
          int sum = c2r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==2){
          int sum = c2m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==2){
          int sum = c2l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==3){
          int sum = c3r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==3){
          int sum = c3m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==3){
          int sum = c3l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
       else if(size=='r' && pizza==4){
          int sum = f4r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==4){
          int sum = f4m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==4){
          int sum = f4l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
       else if(size=='r' && pizza==5){
          int sum = f5r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==5){
          int sum = f5m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==5){
          int sum = f5l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==6){
          int sum = m6r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==6){
          int sum = m6m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==6){
          int sum = m6l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==7){
          int sum = p7r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==7){
          int sum = p7m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==7){
          int sum = p7l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==8){
          int sum = v8r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==8){
          int sum = v8m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==8){
          int sum = v8l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==9){
          int sum = c9r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==9){
          int sum = c9m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==9){
          int sum = c9l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==10){
          int sum = m10r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==10){
          int sum = m10m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==10){
          int sum = m10l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==11){
          int sum = p11r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==11){
          int sum = p11m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==11){
          int sum = p11l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==12){
          int sum = c12r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==12){
          int sum = c12m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==12){
          int sum = c12l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==13){
          int sum = c13r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==13){
          int sum = c13m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==13){
          int sum = c13l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==14){
          int sum = n14r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==14){
          int sum = n14m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==14){
          int sum = n14l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==15){
          int sum = c15r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==15){
          int sum = c15m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==15){
          int sum = c15l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      
      break;
 
 
 int pizza3;
      
      case 18:
     cout<< "PIZZA WITH CHEESE "<<endl;
     
     if(size == 'r' && pizza==1){
        int sum = m1r + 99;
         cout << sum<<"rs"<< endl;
     }
      
      else if(size =='m' && pizza==1){
          int sum =m1m +99;
          cout<<sum<<"rs"<<endl;
      }
      else if(size=='l' && pizza==1){
          int sum = m1l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==2){
          int sum = c2r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==2){
          int sum = c2m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==2){
          int sum = c2l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==3){
          int sum = c3r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==3){
          int sum = c3m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==3){
          int sum = c3l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
       else if(size=='r' && pizza==4){
          int sum = f4r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==4){
          int sum = f4m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==4){
          int sum = f4l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
       else if(size=='r' && pizza==5){
          int sum = f5r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==5){
          int sum = f5m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==5){
          int sum = f5l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==6){
          int sum = m6r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==6){
          int sum = m6m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==6){
          int sum = m6l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==7){
          int sum = p7r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==7){
          int sum = p7m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==7){
          int sum = p7l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==8){
          int sum = v8r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==8){
          int sum = v8m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==8){
          int sum = v8l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==9){
          int sum = c9r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==9){
          int sum = c9m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==9){
          int sum = c9l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==10){
          int sum = m10r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==10){
          int sum = m10m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==10){
          int sum = m10l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==11){
          int sum = p11r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==11){
          int sum = p11m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==11){
          int sum = p11l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==12){
          int sum = c12r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==12){
          int sum = c12m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==12){
          int sum = c12l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==13){
          int sum = c13r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==13){
          int sum = c13m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==13){
          int sum = c13l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==14){
          int sum = n14r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==14){
          int sum = n14m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==14){
          int sum = n14l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==15){
          int sum = c15r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==15){
          int sum = c15m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==15){
          int sum = c15l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      int pizza4;
      
      case 19:
     cout<< "PIZZA WITH TAMATO TOPPING "<<endl;
     
     if(size == 'r' && pizza==1){
        int sum = m1r + 99;
         cout << sum<< "rs"<<endl;
     }
      
      else if(size =='m' && pizza==1){
          int sum =m1m +99;
          cout<<sum<<"rs"<<endl;
      }
      else if(size=='l' && pizza==1){
          int sum = m1l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==2){
          int sum = c2r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==2){
          int sum = c2m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==2){
          int sum = c2l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==3){
          int sum = c3r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==3){
          int sum = c3m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==3){
          int sum = c3l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
       else if(size=='r' && pizza==4){
          int sum = f4r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==4){
          int sum = f4m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==4){
          int sum = f4l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
       else if(size=='r' && pizza==5){
          int sum = f5r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==5){
          int sum = f5m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==5){
          int sum = f5l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==6){
          int sum = m6r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==6){
          int sum = m6m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==6){
          int sum = m6l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==7){
          int sum = p7r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==7){
          int sum = p7m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==7){
          int sum = p7l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==8){
          int sum = v8r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==8){
          int sum = v8m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==8){
          int sum = v8l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==9){
          int sum = c9r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==9){
          int sum = c9m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==9){
          int sum = c9l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==10){
          int sum = m10r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==10){
          int sum = m10m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==10){
          int sum = m10l+99;
          cout<<sum<<"rs"<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==11){
          int sum = p11r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==11){
          int sum = p11m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==11){
          int sum = p11l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==12){
          int sum = c12r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==12){
          int sum = c12m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==12){
          int sum = c12l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==13){
          int sum = c13r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==13){
          int sum = c13m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==13){
          int sum = c13l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==14){
          int sum = n14r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==14){
          int sum = n14m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==14){
          int sum = n14l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==15){
          int sum = c15r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==15){
          int sum = c15m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==15){
          int sum = c15l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
     
     int pizza5;
      
      case 20:
     cout<< "CHEESE BRUST PIZZA"<<endl;
     
     if(size == 'r' && pizza==1){
        int sum = m1r + 99;
         cout << sum<<"rs"<< endl;
     }
      
      else if(size =='m' && pizza==1){
          int sum =m1m +99;
          cout<<sum<<"rs"<<endl;
      }
      else if(size=='l' && pizza==1){
          int sum = m1l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==2){
          int sum = c2r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==2){
          int sum = c2m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==2){
          int sum = c2l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==3){
          int sum = c3r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==3){
          int sum = c3m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==3){
          int sum = c3l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
       else if(size=='r' && pizza==4){
          int sum = f4r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==4){
          int sum = f4m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==4){
          int sum = f4l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
       else if(size=='r' && pizza==5){
          int sum = f5r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==5){
          int sum = f5m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==5){
          int sum = f5l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==6){
          int sum = m6r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==6){
          int sum = m6m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==6){
          int sum = m6l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==7){
          int sum = p7r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==7){
          int sum = p7m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==7){
          int sum = p7l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==8){
          int sum = v8r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==8){
          int sum = v8m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==8){
          int sum = v8l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==9){
          int sum = c9r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==9){
          int sum = c9m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==9){
          int sum = c9l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==10){
          int sum = m10r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==10){
          int sum = m10m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==10){
          int sum = m10l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==11){
          int sum = p11r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==11){
          int sum = p11m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==11){
          int sum = p11l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==12){
          int sum = c12r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==12){
          int sum = c12m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==12){
          int sum = c12l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==13){
          int sum = c13r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==13){
          int sum = c13m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==13){
          int sum = c13l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==14){
          int sum = n14r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==14){
          int sum = n14m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==14){
          int sum = n14l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==15){
          int sum = c15r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==15){
          int sum = c15m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==15){
          int sum = c15l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      int pizza6;
      
      case 21:
     cout<< "PIZZA WITH MUSHROOM TOPPING "<<endl;
     
     if(size == 'r' && pizza==1){
        int sum = m1r + 99;
         cout << sum<< "rs"<<endl;
     }
      
      else if(size =='m' && pizza==1){
          int sum =m1m +99;
          cout<<sum<<"rs"<<endl;
      }
      else if(size=='l' && pizza==1){
          int sum = m1l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==2){
          int sum = c2r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==2){
          int sum = c2m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==2){
          int sum = c2l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==3){
          int sum = c3r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==3){
          int sum = c3m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==3){
          int sum = c3l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
       else if(size=='r' && pizza==4){
          int sum = f4r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==4){
          int sum = f4m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==4){
          int sum = f4l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
       else if(size=='r' && pizza==5){
          int sum = f5r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==5){
          int sum = f5m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==5){
          int sum = f5l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==6){
          int sum = m6r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==6){
          int sum = m6m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==6){
          int sum = m6l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==7){
          int sum = p7r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==7){
          int sum = p7m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==7){
          int sum = p7l+99;
          cout<<sum<<"rs"<<endl;
      }  
      
      else if(size=='r' && pizza==8){
          int sum = v8r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==8){
          int sum = v8m+99;
          cout<<sum<<"rs"<<endl;
      }  
       else if(size=='l' && pizza==8){
          int sum = v8l+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='r' && pizza==9){
          int sum = c9r+99;
          cout<<sum<<"rs"<<endl;
      }  
      else if(size=='m' && pizza==9){
          int sum = c9m+99;
          cout<<sum<<endl;
      }  
       else if(size=='l' && pizza==9){
          int sum = c9l+99;
          cout<<sum<<endl;
      }  
      
      else if(size=='r' && pizza==10){
          int sum = m10r+99;
          cout<<sum<<endl;
      }  
      else if(size=='m' && pizza==10){
          int sum = m10m+99;
          cout<<sum<<endl;
      }  
       else if(size=='l' && pizza==10){
          int sum = m10l+99;
          cout<<sum<<endl;
      }  
      
      else if(size=='r' && pizza==11){
          int sum = p11r+99;
          cout<<sum<<endl;
      }  
      else if(size=='m' && pizza==11){
          int sum = p11m+99;
          cout<<sum<<endl;
      }  
       else if(size=='l' && pizza==11){
          int sum = p11l+99;
          cout<<sum<<endl;
      }  
      else if(size=='r' && pizza==12){
          int sum = c12r+99;
          cout<<sum<<endl;
      }  
      else if(size=='m' && pizza==12){
          int sum = c12m+99;
          cout<<sum<<endl;
      }  
       else if(size=='l' && pizza==12){
          int sum = c12l+99;
          cout<<sum<<endl;
      }  
      else if(size=='r' && pizza==13){
          int sum = c13r+99;
          cout<<sum<<endl;
      }  
      else if(size=='m' && pizza==13){
          int sum = c13m+99;
          cout<<sum<<endl;
      }  
       else if(size=='l' && pizza==13){
          int sum = c13l+99;
          cout<<sum<<endl;
      }  
      else if(size=='r' && pizza==14){
          int sum = n14r+99;
          cout<<sum<<endl;
      }  
      else if(size=='m' && pizza==14){
          int sum = n14m+99;
          cout<<sum<<endl;
      }  
       else if(size=='l' && pizza==14){
          int sum = n14l+99;
          cout<<sum<<endl;
      }  
      else if(size=='r' && pizza==15){
          int sum = c15r+99;
          cout<<sum<<endl;
      }  
      else if(size=='m' && pizza==15){
          int sum = c15m+99;
          cout<<sum<<endl;
      }  
       else if(size=='l' && pizza==15){
          int sum = c15l+99;
          cout<<sum<<endl;
      }  
      
      
 }
}