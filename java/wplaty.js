let suma = 0;
function dodaj()
{
let kwotaStr = document.getElementById('kwota').value.replace(',', '.');
let kwota = parseFloat(kwotaStr);
let opis= document.getElementById('opis').value;
let str = '<div>';
str += opis;
str += " ";
str += '<span>';
str += kwota
str += '</span><button onclick="usun(this);">Usuń</button></div>';
document.getElementById('wplaty').innerHTML += str;
odswierzSume(kwota);
}

function odswierzSume(k)
{
    suma += k;
    document.getElementById('suma').innerHTML = suma;
}

function zaokr(n)
{
    return Math.round(n*100) /100.0;
}

function usun(elem)
{
    const d = elem.parentNode;
    for(const child of d.children)
    {
       if(child.tagName.toLowerCase() == 'span')
       {
        odswierzSume(-parseFloat(child.innerHTML));
       } 
    }
    document.getElementById('wplaty').removeChild(d);
    
    

}