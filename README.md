A simple command line tool to test connection between Qt client applications and a remote Mysql Server. The code includes Secure Sockets Layer (SSL) support to test secure connection.

<u>Software prerequisites:</u><br>
<span style="color: #008000;">Remote MySQL server version: 5.7 or above</span><br>
<span style="color: #008000;">Qt version: Qt_5_7_1 or above<br>
<span style="color: #008000;">OpenSSL 1.0.x or above the for SSL feature</span></span><p>

How to use it:
1. Simply run the mysql_conn_test_database.sql SQL script file to create a test database on the remote server.
2. Set the hostname or IP, port number, username and password. You migth need to create a new database user for this purpose.
[You will need to create SSL certificates for the database server and client in order to test SSL Feature on the MySQL Server.]
3. If everthing is set build and run in your QtCreator.

If everything goes well you will recieve the following feedback from your terminal:
<center>
<a href="https://lnrsoft.com/wp-content/uploads/2017/08/app_output_double.png"><img class="aligncenter size-full wp-image-2604" src="https://lnrsoft.com/wp-content/uploads/2017/08/app_output_double.png" alt="" width="710" height="408" /></a><a href="https://lnrsoft.com/wp-content/uploads/2017/08/app_output.png">
</center>

Written by Roland Ihasz (https://lnrsoft.com)

You can do anything you want with this software, just don't say you wrote
it.

This software is provided "as it is".

The author supplies this software to be publicly redistributed on the understanding that the author is not responsible for the correct functioning of this software in any circumstances and is not liable for any damages caused by this software.

August 2017 

Updated: 14-Aug-2017
