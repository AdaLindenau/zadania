const fs = require('fs');
const dane = fs.readFileSync('ciagi.txt', {encoding: 'utf-8', flag: 'r'}).split('\n')//.filter(l => l.trim().length > 0)
console.log("dane ilość lini" + dane.length);

let ile = 0;
for(let linia of dane) 
{
    if(palindrom(linia))
    {
        ile++;
        if(linia.length== 8) console.log(linia);
    }
    console.log('palindromów: ' + ile);
    

}

function palindrom(str)
{

    for(let i=0; i< str.length/2;i++)
    {
        if (str[i] != str[str.length-1-i]) return false;
    }
    return true;
}