let klikniento = false;
let interval;
let ile = 0;
let liczba;
let czas = 30;
let funds = 1000;
let bet = 0;



//const middle = document.getElementById('middle');
//middle.addEventListener("dragenter", (event) => {document.getElementById('lever').src = 'lever_middle_placeholder.png'});

function losuj()
{
    console.log(funds ,' start');
    if(klikniento) return;
    bet = parseInt(document.getElementById('bet').value)
    if (bet > 0)
    {
        funds -= bet;
        document.getElementById('funds').innerHTML = funds;
        console.log(funds, 'after betting');
        klikniento = true;
        ile = 0;
        czas = 30;
        liczba = Math.ceil(Math.random()*12)
        setTimeout(obroc, czas);
    }
    else
    {
        alert("Najpierw zrób zakład");
    }
} 
function obroc()
{
    if(ile <= 5) document.getElementById('spin1').src = wylosuj();
    if (ile <= 10) document.getElementById('spin2').src = wylosuj();
    document.getElementById('spin3').src = wylosuj();
    liczba = Math.ceil(Math.random()*12);
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
    liczba = Math.ceil(Math.pow(Math.random(), 1,2)*12);
    console.log(liczba, 'liczba skewed')
    return 'assets/s' + liczba + '.png';
}
function bigWin()
{
    
    let s1 = document.getElementById('spin1').src;
    let s2 = document.getElementById('spin2').src;
    let s3 = document.getElementById('spin3').src;
    console.log(s1);

    let cherry = 'file:///C:/Users/elind/Desktop/Stuff/writings/zadania_na_korona_ferie/Infa/zadania/java/gra/assets/s7.png';


    if (s1 == cherry || s2 == cherry || s3 == cherry)
    {
        funds += bet*2;
        console.log('a single cherry');
    }
    else if(((s1 == s2 || s1 == s3) && s1 == cherry ) || (s2 == s3 && s2 == cherry)) 
    {
        funds += bet*3;
        console.log('2 cherries');
    }
    else if (s1 == s2 && s1== s3)
    {
        console.log('3 of the same');
        console.log('s1 = ', s1);
        switch(s1)
        {
            //file:///home/adal21b/Dokumenty

            case 'file:///C:/Users/elind/Desktop/Stuff/writings/zadania_na_korona_ferie/Infa/zadania/java/gra/assets/s1.png':
                funds += bet*5;
                console.log('3 razy 1, x5');
                break;
            case 'file:///home/adal21b/Dokumenty/zadania/java/gra/assets/s2.png':
                funds += bet*10;
                console.log('3 razy 2, x10');
                break;
            case 'file:///home/adal21b/Dokumenty/zadania/java/gra/assets/s3.png':
                funds += bet*15;
                console.log('3 razy 3, x15');
                break;
            case 'file:///home/adal21b/Dokumenty/zadania/java/gra/assets/s4.png':
                funds += bet*20;
                console.log('3 razy 4, x20');
                break;
            case 'file:///home/adal21b/Dokumenty/zadania/java/gra/assets/s5.png':
                funds += bet*25;
                console.log('3 razy 5, x25');
                break;
            case 'file:///home/adal21b/Dokumenty/zadania/java/gra/assets/s6.png':
                funds += bet*30;
                console.log('3 razy 6, x30');
                break;
            case 'file:///home/adal21b/Dokumenty/zadania/java/gra/assets/s7.png':
                funds += bet*50;
                console.log('3 razy 7, x50');
                break;
            case 'file:///home/adal21b/Dokumenty/zadania/java/gra/assets/s8.png':
                funds += bet*75;
                console.log('3 razy 8, x75');
                break;
            case 'file:///home/adal21b/Dokumenty/zadania/java/gra/assets/s9.png':
                funds += bet*100;
                console.log('3 razy 9, x100');
                break;
            case 'file:///home/adal21b/Dokumenty/zadania/java/gra/assets/s10.png':
                funds += bet*250;
                console.log('3 razy 10, x250');
                break;
            case 'file:///home/adal21b/Dokumenty/zadania/java/gra/assets/s11.png':
                funds += bet*500;
                console.log('3 razy 11, x500');
                break;
            case 'file:///home/adal21b/Dokumenty/zadania/java/gra/assets/s12.png':
                funds += bet*1000;
                console.log('3 razy 12, x1000');
                break;
            default:
                console.log("something's wrong");
        }


    }
    

    document.getElementById('funds').innerHTML = funds;
}
