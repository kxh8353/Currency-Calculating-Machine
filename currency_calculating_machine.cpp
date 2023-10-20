//@author Kevin Huang
#include <iostream>
// source 1: https://www.countries-ofthe-world.com/most-traded-currencies.html
float totalvalue = 0;
float grandtotal = 0;
void displaymenu(){
    using namespace std;
         cout << "ENTER A NUMBER BETWEEN 1 AND 20 THAT CORRESPONDING TO THE CURRENCY TO CONVERT TO US DOLLARS:\n"
              << "------------------------------------------------------------------------------------------------------------------------\n"
              << "1. EURO                2. JAPANESE YEN         3. AUSTRALIAN DOLLAR    4. CANADIAN DOLLAR         5. SWISS FRANC\n"
              << "6. CHINESE YUAN        7. SWEDISH KRONA        8. MEXICAN PESO         9. NEW ZEALAND DOLLAR      10. SINGAPORE DOLLAR\n"
              << "11. HONG KONG DOLLAR  12. NORWEGIAN KRONE     13. SOUTH KOREAN WON     14. TURKISH LIRA           15. INDIAN RUPEE\n"
              << "16. RUSSIAN RUBBLE    17. BRAZILIAN REAL      18. SOUTH AFRICAN RAND   19. THAI BAHT              20. MALAYSIAN RINGGIT\n";
}

int calculate(){
    using namespace std;
    float eur_to_usd, jap_to_usd, aus_to_usd, can_to_usd, sws_to_usd, chi_to_usd, swe_to_usd, mex_to_usd, nez_to_usd, sgp_to_usd,
        hkd_to_usd, nwk_to_usd, skw_to_usd, tl_to_usd, inr_to_usd, rrb_to_usd, brz_to_usd, safr_to_usd, thb_to_usd, mlr_to_usd;
    float value;
    int number;
    cin >> number;
    if (number >= 0 && number < 26){
        switch (number) {
            case 0: displaymenu();
            break;
            case 1:
                cout << "Enter a value number in EURO: ";
                cin >> value;
                eur_to_usd = value * 1.06;
                cout << value << " in EURO will be $" << eur_to_usd << " in US dollars.";
                totalvalue = totalvalue + eur_to_usd;
                break;
            case 2:
                cout << "Enter a value number in JAPANESE YEN: ";
                cin >> value;
                jap_to_usd = value * 0.00067;
                cout << value << " in JAPANESE YEN will be $" << jap_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + jap_to_usd;
                break;
            case 3:
                cout << "Enter a value number in AUSTRALIAN DOLLAR: ";
                cin >> value;
                aus_to_usd = value * 0.64;
                cout << value << " in AUSTRALIAN DOLLAR will be $" << aus_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + aus_to_usd;
                break;
            case 4:
                cout << "Enter a value number in CANADIAN DOLLAR: ";
                cin >> value;
                can_to_usd = value * 0.73;
                cout << value << " in CANADIAN DOLLAR will be $" << can_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + can_to_usd;
                break;
            case 5:
                cout << "Enter a value number in SWISS FRANC: ";
                cin >> value;
                sws_to_usd = value * 1.10;
                cout << value << " in SWISS FRANC will be $" << sws_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + sws_to_usd;
                break;
            case 6:
                cout << "Enter a value number in CHINESE YUAN: ";
                cin >> value;
                chi_to_usd = value * 0.14;
                cout << value << " in CHINESE YUAN will be $" << chi_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + chi_to_usd;
                break;
            case 7:
                cout << "Enter a value number in SWEDISH KRONA: ";
                cin >> value;
                swe_to_usd = value * 0.091;
                cout << value << " in SWEDISH KRONA will be $" << swe_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + swe_to_usd;
                break;
            case 8:
                cout << "Enter a value number in MEXICAN PESO: ";
                cin >> value;
                mex_to_usd = value * 0.055;
                cout << value << " in MEXICAN PESO will be $" << mex_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + mex_to_usd;
                break;
            case 9:
                cout << "Enter a value number in NEW ZEALAND DOLLAR: ";
                cin >> value;
                nez_to_usd = value * 0.60;
                cout << value << " in NEW ZEALAND DOLLAR will be $" << nez_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + nez_to_usd;
                break;
            case 10:
                cout << "Enter a value number in SINGAPORE DOLLAR: ";
                cin >> value;
                sgp_to_usd = value * 0.73;
                cout << value << " in SINGAPORE DOLLAR will be $" << sgp_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + sgp_to_usd;
                break;
            case 11:
                cout << "Enter a value number in HONG KONG DOLLAR: ";
                cin >> value;
                hkd_to_usd = value * 0.13;
                cout << value << " in HONG KONG DOLLAR will be $" << hkd_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + hkd_to_usd;
                break;
            case 12:
                cout << "Enter a value number in NORWEGIAN KRONE: ";
                cin >> value;
                nwk_to_usd = value * 10.92;
                cout << value << " in NORWEGIAN KRONE will be $" << nwk_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + nwk_to_usd;
                break;
            case 13:
                cout << "Enter a value number in SOUTH KOREAN WON: ";
                cin >> value;
                skw_to_usd = value * 0.00074;
                cout << value << " in SOUTH KOREAN WON will be $" << skw_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + skw_to_usd;
                break;
            case 14:
                cout << "Enter a value number in TURKISH LIRA: ";
                cin >> value;
                tl_to_usd = value * 0.036;
                cout << value << " in TURKISH LIRA will be $" << tl_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + tl_to_usd;
                break;
            case 15:
                cout << "Enter a value number in INDIAN RUPEE: ";
                cin >> value;
                inr_to_usd = value * 0.012;
                cout << value << " in INDIAN RUPEE will be $" << inr_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + inr_to_usd;
                break;
            case 16:
                cout << "Enter a value number in RUSSIAN RUBBLE: ";
                cin >> value;
                rrb_to_usd = value * 0.0099;
                cout << value << " in RUSSIAN RUBBLE will be $" << rrb_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + rrb_to_usd;
                break;
            case 17:
                cout << "Enter a value number in BRAZILIAN REAL: ";
                cin >> value;
                brz_to_usd = value * 0.19;
                cout << value << " in BRAZILIAN REAL will be $" << brz_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + brz_to_usd;
                break;
            case 18:
                cout << "Enter a value number in SOUTH AFRICAN RAND: ";
                cin >> value;
                safr_to_usd = value * 0.052;
                cout << value << " in SOUTH AFRICAN RAND will be $" << safr_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + safr_to_usd;
                break;
            case 19:
                cout << "Enter a value number in THAI BAHT: ";
                cin >> value;
                thb_to_usd = value * 0.027;
                cout << value << " in THAI BAHT will be $" << thb_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + thb_to_usd;
                break;
            case 20:
                cout << "Enter a value number in MALAYSIAN RINGGIT: ";
                cin >> value;
                mlr_to_usd = value * 0.21;
                cout << value << " in MALAYSIAN RINGGIT will be $" << mlr_to_usd << " in US dollars.\n";
                totalvalue = totalvalue + mlr_to_usd;
                break;

        }
        grandtotal = grandtotal + totalvalue;
    }
}

int main() {
    using namespace std;
    displaymenu();
    calculate();
    cout << "Do you want to continue? (y or n) ";
    char yn;
    cin >> yn;
    if (yn == 'n'){
        cout << "would you like to see the grand total calculated in USD? (y or n) ";
        char ifdisplayUSD;
        cin >> ifdisplayUSD;
        if (ifdisplayUSD == 'y'){
            cout << "The grand total converted in US dollars is $" << totalvalue << "\n";
        }else{
            cout << "Thanks for using the currency calculating machine! See you next time! ";
        }
    }
    if (yn == 'y'){
        main();
    }
    if (yn != 'y' && yn != 'n'){
        cout << "please enter y for yes and n for no: ";
    }
    return 0;
}
