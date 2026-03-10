create database astawus;
use astawus;
create table myTable(id int not null primary key,
fname varchar(20),
lname varchar(20),
email varchar(20),
password1 varchar(20));

alter table myTable
modify id int auto_increment;