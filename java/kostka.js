let klikniento = false;
let interval;
let ile = 0;

function losuj()
{
    klikniento = true;
    ile = 0;
    interval = setInterval(obroc, 500);
}    
function wylosuj()
{
    return kostka + Math.ceil(Math.random()*6) + '.png';
}
function obroc()
{
    document.getElementById('kostka').src = wylosuj();
    ile++;
    if (ile > 5) 
    {
    clearInterval(interval);
        klikniento = false;
    }
}