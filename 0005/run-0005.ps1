$app = get-childitem .\ *.exe | select -ExpandProperty fullname

$test = Test-Path .\out.txt

if (!$test) {} else {remove-item .\out.txt}

$app

$set = 10,11,12,13,14,15,16,17,18,19,20

foreach ($item in $set)
{

    
    [System.Collections.arraylist]$out = @()

    $run = "&" + ($app + " " + $item) 

   

    $asd = Invoke-Expression $run | out-file .\out.txt -Append


}
