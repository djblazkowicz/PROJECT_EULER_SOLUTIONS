$app = get-childitem .\ *.exe | select -ExpandProperty fullname

$test = Test-Path .\out.txt

if (!$test) {} else {remove-item .\out.txt}

#$app

#define array of input arguments to run the .exe with
$set = 99,999,9999

foreach ($item in $set)
{

    
    #so this will run whatever.exe 99 then whatever.exe 999 and so on..
    #and put the console output in the out.txt text file

    $run = "&" + ($app + " " + $item) 

    $asd = Invoke-Expression $run | out-file .\out.txt -Append


}
