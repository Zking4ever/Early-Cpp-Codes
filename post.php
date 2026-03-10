<?php
$con.mysqli_conect('localhost','root','','astawus');

$fname=$_POST('fname');
$lname=$_POST('lname');
$email=$_POST('email');
$password=$_POST('password');

$spl('insert into myTable(id,fname,lname,email,passwor1) values ("0","$fname","$lname","$email","$password")')
