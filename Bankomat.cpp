#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main () {

   int user;
   int pin;
   int u;

   int u1 = 7804;
   int banka1;
   int ztrata1;
   int presun1;

   int u2 = 5000;
   int banka2;
   int ztrata2;
   int presun2;

   int u3 = 15433;
   int banka3;
   int ztrata3;
   int presun3;
   uzivatel:

   cout << "Vitejte ve vasebanka\n";
   cout << "zadejte cislo uzivatele: \n";
   cin >> user;

   switch (user){
      case 1:{
         cout << "Zadejte svuj pin:\n";
         cin >> pin;
         system("cls");
         next1:

      if (pin == 4587) {
         cout << "Vitejte ve svem ucte user 1\n\n";
         cout << "Co si prejete udelat s vasimi penezmi?\n";
         cout << "ukazat zustatek - 1\n";
         cout << "vybrat - 2\n";
         cout << "presunout penize - 3\n";
         cout << "Odhlasit - 4\n";
         cout << "Vypnout - 5\n";
         cin >> banka1;

         switch (banka1){
            case 1:
            cout << u1 << "\n";
            Sleep(3000);
            system("cls");
            goto next1;

            case 2:
            cout << "Kolik si chcete vybrat?\n";
            cin >> ztrata1;
            if(ztrata1 > u1) {
                cout << "zadany vyber porusuje vase limity";
                Sleep(2000);
                system("cls");
                goto next1;
            }else{
            u1 = u1 - ztrata1;
            cout << "Vas zustatek je " << u1;
            Sleep(3000);
            system("cls");
            goto next1;
            }
           case 3:
            prevod1:
            cout << "Komu chcete penize prevest?\n";
            cout << "zde je nabidka uzivatelu\n" << "2\n" << "3\n";
            cin >> u;
            if(u == 1){
            cout << "Nemuzete poslat penize sami sobe";
            Sleep(2000);
            system("cls");
            goto prevod1;

           }else if(u == 2){
            cout << "Kolik chcete prevest\n";
            cin >> presun1;
            if (presun1 > u1){
                cout << "vybrany presun je mimo vase limity";
                Sleep(2000);
                system("cls");
                goto next1;
            }else{
            u1 = u1 - presun1;
            u2 = u2 + presun1;
            cout << "Vas zustatek je " << u1;
            Sleep(2000);
            system("cls");
            goto next1;
            }
           }else if(u == 3){
            cout << "Kolik chcete prevest\n";
            cin >> presun1;
            if (presun1 > u1){
                cout << "vybrany presun je mimo vase limity";
                Sleep(2000);
                system("cls");
                goto next1;
            }else{
            u1 = u1 - presun1;
            u3 = u3 + presun1;
            cout << "Vas zustatek je " << u1;
            Sleep(2000);
            system("cls");
            goto next1;
            }
            }else{
               cout << "Ucet neexistuje";
               Sleep(2000);
               system("cls");
               goto prevod1;
            }

            case 4:
            cout << "Odhlasuju...\n";
            Sleep(2000);
            system("cls");
            goto uzivatel;

            case 5:
            cout << "vypinam...";
            exit(0);

            default:
            cout << "moznost neexistuje";
            Sleep(2000);
            system("cls");
            goto next2;
          }

      }else{
         cout << "Zadali jste spatny pin\n";
         goto uzivatel;
      }
      }
      break;
      case 2:{
        cout << "Zadejte svuj pin:\n";
        cin >> pin;
        system("cls");
        next2:

      if (pin == 6984) {
         cout << "Vitejte ve svem ucte user 2\n\n";
         cout << "co si prejete udelat s vasimi penezmi?\n";
         cout << "ukazat zustatek - 1\n";
         cout << "vybrat - 2\n";
         cout << "presunout penize - 3\n";
         cout << "Odhlasit - 4\n";
         cout << "Vypnout - 5\n";
         cin >> banka2;

         switch (banka2){
            case 1:
            cout << u2;
            Sleep(2000);
            system("cls");
            goto next2;

            case 2:
            cout << "Kolik si chcete vybrat?\n";
            cin >> ztrata2;
            if(ztrata2 > u2){
                cout << "zadany vyber porusuje vase limity";
                Sleep(2000);
                system("cls");
                goto next2;
            }else{
            u2 = u2 - ztrata2;
            cout << "Vas zustatek je " << u2;
            Sleep(2000);
            system("cls");
            goto next2;
            }
            case 3:
            prevod2:
            cout << "Komu chcete penize prevest?\n";
            cout << "zde je nabidka uzivatelu\n" << "1\n" << "3\n";
            cin >> u;
            if(u == 2){
            cout << "Nemuzete poslat penize sami sobe";
            Sleep(2000);
            system("cls");
            goto prevod2;

           }else if(u == 1){
            cout << "Kolik chcete prevest\n";
            cin >> presun2;
            if (presun2 > u2){
                cout << "Vybrany presun je mimo vase limity";
                Sleep(2000);
                system("cls");
                goto next2;
            }else{
            u2 = u2 - presun2;
            u1 = u1 + presun2;
            cout << "Vas zustatek je " << u2;
            Sleep(2000);
            system("cls");
            goto next2;
           }
           }else if(u == 3){
            cout << "Kolik chcete prevest\n";
            cin >> presun2;
            if (presun2 > u2){
                cout << "Vybrany presun je mimo vase limity";
                Sleep(2000);
                system("cls");
                goto next2;
            }else{
            u2 = u2 - presun2;
            u3 = u3 + presun2;
            cout << "Vas zustatek je " << u2;
            Sleep(2000);
            system("cls");
            goto next2;
            }
            }else{
               cout << "Ucet neexistuje";
               Sleep(2000);
               system("cls");
               goto prevod2;
            }

            case 4:
            cout << "Odhlasuju...\n";
            Sleep(2000);
            system("cls");
            goto uzivatel;

            case 5:
            cout << "vypinam...";
            exit(0);

            default:
            cout << "moznost neexistuje";
            Sleep(2000);
            system("cls");
            goto next2;
         }

      }else{
         cout << "Zadali jste spatny pin\n";
         goto uzivatel;
        }
      }
      break;
      case 3:{

        cout << "Zadejte svuj pin:\n";
        cin >> pin;
        system("cls");
        next3:

      if (pin == 1459) {

         cout << "Vitejte ve svem ucte user 3\n\n";
         cout << "co si prejete udelat s vasimi penezmi?\n\n";
         cout << "ukazat zustatek - 1\n";
         cout << "vybrat - 2\n";
         cout << "presunout penize - 3\n";
         cout << "Odhlasit - 4\n";
         cout << "Vypnout - 5\n";
         cin >> banka3;

         switch (banka3){
            case 1:
            cout << u3;
            Sleep(2000);
            system("cls");
            goto next3;

            case 2:
            cout << "Kolik si chcete vybrat?\n";
            cin >> ztrata3;
            if(ztrata3 > u3){
                cout << "zadany vyber porusuje vase limity";
                Sleep(2000);
                system("cls");
                goto next3;
            }else{
            u3 = u3 - ztrata3;
            cout << "Vas zustatek je " << u3;
            Sleep(2000);
            system("cls");
            goto next3;
            }
            case 3:
            prevod3:
            cout << "Komu chcete penize prevest?\n";
            cout << "zde je nabidka uzivatelu\n" << "1\n" << "2\n";
            cin >> u;
            if(u == 3){
            cout << "Nemuzete poslat penize sami sobe\n";
            Sleep(2000);
            system("cls");
            goto prevod3;

           }else if(u == 1){
            cout << "Kolik chcete prevest\n";
            cin >> presun3;
            if (presun3 > u3) {
                cout << "vybrany presun je vetsi nez limit";
                Sleep(2000);
                system("cls");
                goto next3;
            }else{
            u3 = u3 - presun3;
            u1 = u1 + presun3;
            cout << "Vas zustatek je " << u3;
            Sleep(2000);
            system("cls");
            goto next3;
           }
           }else if(u == 2){
            cout << "Kolik chcete prevest\n";
            cin >> presun3;
            if (presun3 > u3) {
                cout << "vybrany presun je vetsi nez limit";
                Sleep(2000);
                system("cls");
                goto next3;
            }else{
            u3 = u3 - presun3;
            u2 = u2 + presun3;
            cout << "Vas zustatek je\n" << u3;
            Sleep(2000);
            system("cls");
            goto next3;
            }
            }else{
               cout << "Ucet neexistuje";
               Sleep(2000);
               system("cls");
               goto prevod3;
            }

            case 4:
            cout << "Odhlasuju...\n";
            Sleep(2000);
            system("cls");
            goto uzivatel;

            case 5:
            cout << "vypinam...";
            exit(0);

            default:
            cout << "moznost neexistuje";
            Sleep(2000);
            system("cls");
            goto next2;
         }
      }else{
         cout << "Zadali jste spatny pin\n";
         goto uzivatel;
        }
      }
      default:
      cout << "neplatny uzivatel";
      Sleep(2000);
      system("cls");
      goto uzivatel;
      break;

   }
   return 0;
}




