let klikniento = false;
let interval;
let ile = 0;
let liczba;
let czas = 30;
function losuj()
{
    if(klikniento) return;
    klikniento = true;
    ile = 0;
    czas = 30;
    liczba = Math.ceil(Math.random()*6)
    setTimeout(obroc, czas);

} 
function obroc()
{
    document.getElementById('kostka').src = wylosuj();
    liczba ++;
    if(liczba > 6) liczba = 1;
    ile++;
    if (ile > 5) 
    {
    clearInterval(interval);
        ile = 0;
        klikniento = false;
    }
    else
    {
        setTimeout(obroc,czas+=50);
    }
}   
function wylosuj()
{
    return 'kostka/kostka' + liczba + '.png';
}
