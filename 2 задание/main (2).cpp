#include <iostream>
#include "modAlphaCipher.h"
#include <locale>
#include <codecvt>
#include <cwchar>
using namespace std;
void check(const wstring& Text, const wstring& key) {
    wstring cipherText;
    wstring decryptedText;
    modAlphaCipher cipher(key);
    cipherText = cipher.encrypt(Text);
    decryptedText = cipher.decrypt(cipherText);
    wcout<<"key="<<key<<endl;
    wcout<<Text<<endl;
    wcout<<cipherText<<endl;
    wcout<<decryptedText<<endl;
    if (Text == decryptedText) cout<<"Ok\n";
    else cout<<"Err\n";
}
int main(int argc, char **argv) {
    locale loc("ru_RU.UTF-8");
    locale::global(loc);
    check(L"тихо шифером шурша - крыша едет не шурша", L"ПРОСТО");
    check(L"тихо шифером шурша - крыша едет не шурша",L"ПРИМЕР");
    check(L"тихо шифером шурша - крыша едет не шурша",L"АБВГ");
	return 0;
}