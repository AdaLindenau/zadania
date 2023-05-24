function sprawdz()
{
    let str = document.getElementById('pesel').value;
    if (poprawny(str))
    {
        urodzenie(str);
        plec(str);
    }
    else 
    {
        alert('błędny numer pesel');
    }
}
function poprawny(str)
{   let suma = 0;
    let pom;
    let tab = [1, 3, 7, 9, 1, 3, 7, 9, 1, 3];
    if (str.length != 11) 
    {
        console.log('zła długość');
        return false;
    }
    
    for (let i = 0; i  < 10; i++)
    {
        console.log(parseInt(str[i]));
        pom = tab[i] * str[i];
        pom = pom.toString();
        suma += parseInt(pom[pom.length - 1]);
        
    }
    suma = suma.toString();
    console.log(suma);
    pom = 10 - suma[suma.length - 1];
    console.log(pom)
    if (str[10] == pom) return true;
    else 
    {
        console.log("zła cyfra kontrolna");
        return false;
    }
}   

function urodzenie(str)
{
    let rok = str.toString().substring(0, 2);
    let miesiac = str.toString().substring(2, 4);
    let dzien = str.toString().substring(4, 6);
    let data = dzien;
    data += '.';

    if (miesiac > 80) 
    {
    rok = '18' + rok;
    miesiac -= 80;
    }
    if (miesiac < 20) rok = '19' + rok;
    if (miesiac > 20 && miesiac < 40) 
    {
        rok = '20' + rok;
        miesiac -= 20;
    }
    if (miesiac > 40 && miesiac < 60) 
    {
    rok = '21' + rok;
    miesiac -= 40;
    }
    if (miesiac > 60 && miesiac < 80) 
    {
    rok = '22' + rok;
    miesiac -= 60;
    }
    data += miesiac;
    data += '.';
    data += rok;

    document .getElementById('urodzenie').innerHTML = data;
}
function plec(str)
{
    if(str[9] % 2 == 0) document.getElementById('plec').innerHTML = "Kobieta";
    else document.getElementById('plec').innerHTML = "Mężczyzna";
}