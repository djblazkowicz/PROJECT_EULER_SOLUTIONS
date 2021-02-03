$app = get-childitem .\ *.exe | select -ExpandProperty fullname

$test = Test-Path .\out.txt

if (!$test) {} else {remove-item .\out.txt}

$app

$set = 10,100,1000,10000,100000,1000000,10000000,100000000,1000000000

foreach ($item in $set)
{

    
    [System.Collections.arraylist]$out = @()

    $run = "&" + ($app + " " + $item) 

   

    $asd = Invoke-Expression $run | out-file .\out.txt -Append


}
