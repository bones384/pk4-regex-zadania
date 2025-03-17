#include <iostream>
#include <regex>
#include <sstream>
int main() {
    // Z1.1: Podstawy regex
    bool wyswietlajz1 = true;
    if(wyswietlajz1)
    {
        std::string s[] = {"Ananas", "ananas","a", "aaaaaa","aaa", "bananas", "ananass", "21489"};

        // a) Tylko "ananas"
        {
            std::regex r(R"(Tu wpisz regex!)");
            std::cout << "Na pizzy nie pasuje: \n";
            for (auto &x: s) {
                if (std::regex_match(x, r)) std::cout << x << '\n';
            }
        }
        // b) Składa się z samego "a" od 1 do 3 razy
        {
            std::regex r(R"(Tu wpisz regex!)");
            std::cout << "Litery 'a' sa fajne z umiarem: \n";
            for (auto &x: s) {
                if (std::regex_match(x, r)) std::cout << x << '\n';
            }
        }
        // c) Składa się z samego "a" przynajmniej raz
        {
            std::regex r(R"(Tu wpisz regex!)");
            std::cout << "Litery 'a' sa fajne zawsze: \n";
            for (auto &x: s) {
                if (std::regex_match(x, r)) std::cout << x << '\n';
            }
        }
        // d) Dowolna litera dowolna ilosc razy
        {
            std::regex r(R"(Tu wpisz regex!)");
            std::cout << "Wszystkie slowa: \n";
            for (auto &x: s) {
                if (std::regex_match(x, r)) std::cout << x << '\n';
            }
        }
        // e) wszystko co zaczyna się na "a"
        {
            std::regex r(R"(Tu wpisz regex!)");
            std::cout << "Slowa na 'a': \n";
            for (auto &x: s) {
                if (std::regex_match(x, r)) std::cout << x << '\n';
            }
        }
        // f) wszystko co zaczyna się na "a" lub "A"
        {
            std::regex r(R"(Tu wpisz regex!)");
            std::cout << "Slowa na 'a' lub 'A': \n";
            for (auto &x: s) {
                if (std::regex_match(x, r)) std::cout << x << '\n';
            }
        }
        // g) Ma dokładnie 6 liter
        {
            std::regex r(R"(Tu wpisz regex!)");
            std::cout << "Na pizzy nie pasuje: \n";
            for (auto &x: s) {
                if (std::regex_match(x, r)) std::cout << x << '\n';
            }
        }
    }
    // Z1.2: Search i grupy prechwytywania
    bool wyswietlajz2 = false;
    if(wyswietlajz2)
    {
        std::string s[] = {"myfile.pdf","manual.pdf.txt","bacon",
                           "pdf","sharemyvideo.mp3","myselfie.jpg",
                           "IMG_1234.png","IMG1234.txt","IMG_1234.wav",
                           "IMG_2137.png","IMG_2352.png","IMG_9563.png",
                           "clickme.mp3.exe", "notafile", "Hello, world!",
                           "mypng.png","png","hi.png.exe","IMG_1234.png.exe"};
        // a) Wszystkie pliki ktore maja rozszerzenie
        {
            std::regex r(R"(Tu wpisz regex!)");
            std::cout << "Pliki: \n";
            for (auto &x: s) {
                std::smatch m;
                std::regex_search(x, m,r);
                if (!m.empty())
                {
                    std::cout<<m.str()<<" w "<<x<<" spelnia wyrazenie \n";
                   for(int i = 1; i < m.size(); i++)
                   {
                       std::cout<<"Zawartosc grupy przchwytywania "<<i<<" : "<<m[i]<<'\n';
                   }
                }
            }
        }
        // b) Wszystkie pliki zaczynające się na "my"
        {
            std::regex r(R"(Tu wpisz regex!)");
            std::cout << "Moje pliki: \n";
            for (auto &x: s) {
                std::smatch m;
                std::regex_search(x, m,r);
                if (!m.empty())
                {
                    std::cout<<m.str()<<" w "<<x<<" spelnia wyrazenie \n";
                    for(int i = 1; i < m.size(); i++)
                    {
                        std::cout<<"Zawartosc grupy przchwytywania "<<i<<" : "<<m[i]<<'\n';
                    }
                }
            }
        }
        // c) Wszystkie pliki zaczynające się na "my", przechwyć ich rozszerzenie
        {
            std::regex r(R"(Tu wpisz regex!)");
            std::cout << "Moje pliki i ich rozszerzenia: \n";
            for (auto &x: s) {
                std::smatch m;
                std::regex_search(x, m,r);
                if (!m.empty())
                {
                    std::cout<<m.str()<<" w "<<x<<" spelnia wyrazenie \n";
                    for(int i = 1; i < m.size(); i++)
                    {
                        std::cout<<"Zawartosc grupy przchwytywania "<<i<<" : "<<m[i]<<'\n';
                    }
                }
            }
        }
        // d) Wszystkie pliki .png
        {
            std::regex r(R"(Tu wpisz regex!)");
            std::cout << "Pliki PNG: \n";
            for (auto &x: s) {
                std::smatch m;
                std::regex_search(x, m,r);
                if (!m.empty())
                {
                    std::cout<<m.str()<<" w "<<x<<" spelnia wyrazenie \n";
                    for(int i = 1; i < m.size(); i++)
                    {
                        std::cout<<"Zawartosc grupy przchwytywania "<<i<<" : "<<m[i]<<'\n';
                    }
                }
            }
        }
        // e) Wszystkie pliki .png, w formacie IMG_XXXX.png gdzie X to cyfra
        {
            std::regex r(R"(Tu wpisz regex!)");
            std::cout << "Pliki PNG w formacie: \n";
            for (auto &x: s) {
                std::smatch m;
                std::regex_search(x, m,r);
                if (!m.empty())
                {
                    std::cout<<m.str()<<" w "<<x<<" spelnia wyrazenie \n";
                    for(int i = 1; i < m.size(); i++)
                    {
                        std::cout<<"Zawartosc grupy przchwytywania "<<i<<" : "<<m[i]<<'\n';
                    }
                }
            }
        }
        // f) Wszystkie pliki .png, w formacie IMG_XXXX.png gdzie X to cyfra, przechwyć cyfrę
        {
            std::regex r(R"(Tu wpisz regex!)");
            std::cout << "Pliki PNG w formacie i ich identyfikatory: \n";
            for (auto &x: s) {
                std::smatch m;
                std::regex_search(x, m,r);
                if (!m.empty())
                {
                    std::cout<<m.str()<<" w "<<x<<" spelnia wyrazenie \n";
                    for(int i = 1; i < m.size(); i++)
                    {
                        std::cout<<"Zawartosc grupy przchwytywania "<<i<<" : "<<m[i]<<'\n';
                    }
                }
            }
        }
    }
    // Z1.3: Dluzszy tekst
    bool wyswietlajz3 = false;
    if(wyswietlajz3) {
        std::string s = "I'm in the thick of it, everybody knows\n"
                        "They know me where it snows, I skied in and they froze\n"
                        "I don't know no nothin' 'bout no ice, I'm just cold\n"
                        "Forty somethin' milli' subs or so, I've been told\n"
                        "From the screen to the ring, to the pen, to the king\n"
                        "Where's my crown? That's my bling\n"
                        "Always drama when I ring\n"
                        "See, I believe that if I see it in my heart\n"
                        "Smash through the ceiling 'cause I'm reachin' for the stars\n"
                        "Woah-oh-oh\n"
                        "This is how the story goes\n"
                        "Woah-oh-oh\n"
                        "I guess this is how the story goes";
        std::string word;
        // a) Program czyta wers po wersie. Wypisz wszystkie wersy kończące się na ing. Przechwyć ostatnie słowo.
        {
            std::stringstream ss(s);
            std::regex r(R"(Tu wpisz regex!)");
            std::cout << "Wersy konczace sie na ing: \n";
            while (getline(ss, word)) {
                std::smatch m;
                std::regex_search(word, m, r);
                if (!m.empty()) {
                    std::cout << m.str() << '\n';
                    for (int i = 1; i < m.size(); i++) {
                        std::cout << "Zawartosc grupy przchwytywania " << i << " : " << m[i] << '\n';
                    }
                }
            }
        }
        // b) Wszystkie słowa kończące się na ing, wyłap całe słowo
        {
            std::stringstream ss(s);
            std::regex r(R"(Tu wpisz regex!)");
            std::cout << "Slowa konczace sie na ing: \n";
            while (getline(ss, word)) {
                std::smatch m;
               while( std::regex_search(word, m, r)){
                if (!m.empty()) {
                    std::cout << m.str() << " spelnia wyrazenie \n";
                    for (int i = 1; i < m.size(); i++) {
                        std::cout << "Zawartosc grupy przchwytywania " << i << " : " << m[i] << '\n';
                    }
                    word=m.suffix();
                }
               }
            }
        }
    }
    return 0;
}
