﻿#include <iostream>
//HutorcovKirill2006
//48 75 74 6F 72 63 6F 76 4B 69 72 69 6C 6C 32 30 30 36
//0048 0075 0074 006F 0072 0063 006F 0076 004B 0069 0072 0069 006C 006C 0032 003 0003 00036
//0048 0075 0074 006F 0072 0063 006F 0076 004B 0069 0072 0069 006C 006C 0032 003 0003 00036

//ХуторцовКирилл2006
// d5 f3 f2 ee f0 f6 ee e2 ca e8 f0 e8 eb eb 32 30 30 36 
//0425 0443 0442 043E 0440 0446 043E 0432 041A 0438 0440 0438 043B 043B 0032 0030 0030 0036
//0425 0443 0442 043E 0440 0446 043E 0432 041A 0438 0440 0438 043B 043B 0032 0030 0030 0036

//Хуторцов2006Kirill
//d5 f3 f2 ee f0 f6 ee e2 32 30 30 36 4b 69 72 69 6c 6c    
//0425 0443 0442 043E 0440 0446 043E 0432 0032 0030 0030 0036 004B 0069 0072 0069 006C 006C
//0425 0443 0442 043E 0440 0446 043E 0432 0032 0030 0030 0036 004B 0069 0072 0069 006C 006C


int main()
{
    int number = 0x12345678;
    char hello[] = "Hello, ";
    char lfie[] = "HutorcovKirill2006";
    char rfie[] = "ХуторцовКирилл2006";
    char lr[] = "Хуторцов2006Kirill";

    wchar_t Lfie[] = L"HutorcovKirill2006"; 
    wchar_t Rfie[] = L"ХуторцовКирилл2006";
    wchar_t Lr[] = L"Хуторцов2006Kirill";

    std::cout << hello << lfie << std::endl;
    return 0;
}

