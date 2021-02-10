$app = get-childitem .\ *.exe | select -ExpandProperty fullname

$test = Test-Path .\out.txt

if (!$test) {} else {remove-item .\out.txt}

$app

$set = 99,999,9999

foreach ($item in $set)
{

    
    [System.Collections.arraylist]$out = @()

    $run = "&" + ($app + " " + $item) 

   

    $asd = Invoke-Expression $run | out-file .\out.txt -Append


}
