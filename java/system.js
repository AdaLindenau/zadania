function przelicz(nr)
{
    let l1 = (document.getElementById('l1').value);
    let l2 = (document.getElementById('l2').value);
    let s1 = parseInt(document.getElementById('sys1').value);
    let s2 = parseInt(document.getElementById('sys2').value);
    if(nr === 1)
    {

        let x = parseInt(l1, s1);
        document.getElementById('l2').value = x.toString(s2);
    }
    else
    {
        let x = parseInt(l2, s2);
        document.getElementById('l1').value = x.toString(s1);
    }
}