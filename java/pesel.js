function sprawdz()
{
    let str = document.getElementById('pesel').value;
    if (poprawny(str))
    {
        urodzenie(str);
        plec(str);
    }
}
function poprawny(str)
{   let suma = 0;
    let pom;
    let tab = [1, 3, 7, 9, 1, 3, 7, 9, 1, 3];
    for (let i = 0; i  < 10; i++)
    {
        console.log(parseInt(str[i]));
        pom = tab[i] * str[i];
        pom = pom.toString;
        suma += pom[pom.length - 1];
        
    }
    suma = suma.toString;
    pom = 10 - suma[suma.length - 1];

}   return true;

function urodzenie(str)
{

}
function plec(str)
{

}