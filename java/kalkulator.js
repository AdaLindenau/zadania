let l1;
let l2;
function wczytaj()
{
    l1 = parseFloat(document.getElementById('l1').value.replace(',', '.'));
    l2 = parseFloat(document.getElementById('l2').value.replace(',', '.'));
}
function wynik(liczba)
{
    document.getElementById('wynik').innerHTML = liczba;
}
function dodaj()
{
    wczytaj();
    wynik(l1 + l2);

}
function odejmij()
{
    wczytaj();
    wynik(l1 - l2);
}
function pomnoz()
{
    wczytaj();
    wynik(l1*l2);
}
function podziel()
{
    wczytaj();
    wynik(l1 / l2);
}
function poteguj()
{
    wczytaj();
    wynik(Math.pow(l1, l2));
}
function modulo()
{
    wczytaj();
    wynik(l1 % l2);
}
function pierwiastek()
{
    wczytaj();
    wynik(Math.pow(l1, 1 / l2));
}
