let klikniento = false;
let interval;
let ile = 0;
let liczba;
let czas = 30;
let funds = 1000;
let bet;

function losuj()
{
    console.log(funds);
    if(klikniento) return;
    bet = parseInt(document.getElementById('bet').value)
    funds -= bet;
    document.getElementById('funds').innerHTML = funds;
    console.log(funds);
    klikniento = true;
    ile = 0;
    czas = 30;
    liczba = Math.ceil(Math.random()*6)
    setTimeout(obroc, czas);
    bigWin();
    console.log(funds);
    

} 
function obroc()
{
    if(ile <= 5) document.getElementById('spin1').src = wylosuj();
    if (ile <= 10) document.getElementById('spin2').src = wylosuj();
    document.getElementById('spin3').src = wylosuj();
    liczba += Math.ceil(Math.random()*6);
    if(liczba > 6) liczba = 1;
    ile++;
    if (ile > 15) 
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
function bigWin()
{
    let s1 = document.getElementById('spin1').src;
    let s2 = document.getElementById('spin2').src;
    let s3 = document.getElementById('spin3').src;
    console.log(s1);

    if (s1 == s2 == s3) funds += bet*3;
    else if(s1 == s2 || s1 == s3 || s2 == s3) funds += bet*2;

    document.getElementById('funds').innerHTML = funds;
}
