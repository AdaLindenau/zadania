let klikniento = false;
let interval;
let ile = 0;
let liczba;
let czas = 30;
let funds = 1000;
let bet;



const lever = document.getElementById('lever');
lever.addEventListener("dragenter", document.getElementById('lever').src = 'gra/lever_middle_placeholder.png');

function losuj()
{
    console.log(funds ,' start');
    if(klikniento) return;
    bet = parseInt(document.getElementById('bet').value)
    funds -= bet;
    document.getElementById('funds').innerHTML = funds;
    console.log(funds, 'after betting');
    klikniento = true;
    ile = 0;
    czas = 30;
    liczba = Math.ceil(Math.random()*6)
    setTimeout(obroc, czas);
} 
function obroc()
{
    if(ile <= 5) document.getElementById('spin1').src = wylosuj();
    if (ile <= 10) document.getElementById('spin2').src = wylosuj();
    document.getElementById('spin3').src = wylosuj();
    liczba = Math.ceil(Math.random()*6);
    ile++;
    if (ile > 15) 
    {
    clearInterval(interval);
        ile = 0;
        klikniento = false;
        bigWin();
        console.log(funds, 'after big win');
    }
    else
    {
        setTimeout(obroc,czas+=50);
    }
}   
function wylosuj()
{
    liczba = Math.ceil(Math.pow(Math.random(), 1.4)*6);
    console.log(liczba, 'liczba skewed')
    return 'kostka/kostka' + liczba + '.png';
}
function bigWin()
{
    
    let s1 = document.getElementById('spin1').src;
    let s2 = document.getElementById('spin2').src;
    let s3 = document.getElementById('spin3').src;
    console.log(s1);

    if (s1 == s2 && s1== s3)
    {
        console.log('3 of the same');
        console.log('s1 = ', s1);
        switch(s1)
        {

            case 'file:///home/adal21b/Dokumenty/zadania/java/kostka/kostka1.png':
                funds += bet*3;
                console.log('3 razy 1, x3');
                break;
            case 'file:///home/adal21b/Dokumenty/zadania/java/kostka/kostka2.png':
                funds += bet*5;
                console.log('3 razy 2, x5');
                break;
            case 'file:///home/adal21b/Dokumenty/zadania/java/kostka/kostka3.png':
                funds += bet*10;
                console.log('3 razy 3, x10');
                break;
            case 'file:///home/adal21b/Dokumenty/zadania/java/kostka/kostka4.png':
                funds += bet*15;
                console.log('3 razy 4, x15');
                break;
            case 'file:///home/adal21b/Dokumenty/zadania/java/kostka/kostka5.png':
                funds += bet*25;
                console.log('3 razy 5, x25');
                break;
            case 'file:///home/adal21b/Dokumenty/zadania/java/kostka/kostka6.png':
                funds += bet*50;
                console.log('3 razy 6, x50');
                break;
            default:
                console.log("something's wrong");
        }


    }
    else if(s1 == s2 || s1 == s3 || s2 == s3) 
    {
        funds += bet*2;
        console.log('2 of the same');
    }

    document.getElementById('funds').innerHTML = funds;
}
