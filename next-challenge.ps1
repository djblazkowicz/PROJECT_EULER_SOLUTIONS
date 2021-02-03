$folders = Get-ChildItem -Directory .\ |where {$_.name -ne "template"}| select name


$latestFolder = $folders[$folders.count - 1].Name

$num = [int]($latestFolder -replace "0","") + 1

$newfoldername = "" + $num

$newfolder = while ($newfoldername.Length -lt 4) {

$newfoldername = "0" + $newfoldername

}

$newfoldername

New-Item ".\$newfoldername" -ItemType Directory

Copy-Item .\template\* .\$newfoldername

$newitems = Get-ChildItem .\$newfoldername | select name,fullname
$newitems | foreach {Rename-Item -Path $_.fullname -NewName $($_.name -replace "template", $newfoldername) }



$URL = "https://projecteuler.net/minimal=" + $num

$description = (Invoke-WebRequest -Uri $URL).content

$description = $description -split "`n"

$description = $description | foreach {("//") + $_}

$cfilepath = ".\" + $newfoldername + "\" + $newfoldername + ".c"

$CfileContent = Get-Content $cfilepath

$finalContent = @()

$finalContent+= $description
$finalContent+= $CfileContent


$finalContent | foreach {if ($_ -like "*template.h*") {$_ -replace "template", $newfoldername} else {$_}} | Set-Content $cfilepath

