A simple command line tool to test connection between Qt client applications and a remote Mysql Server. The code includes Secure Sockets Layer (SSL) support to test secure connection.

<u>Software prerequisites:</u>
<span style="color: #008000;">Remote MySQL server version: 5.7 or above</span>
<span style="color: #008000;">Qt version: Qt_5_7_1 or above
<span style="color: #008000;">OpenSSL 1.0.x or above the for SSL feature</span></span>

How to use it:
1. I simply run the mysql_conn_test_database.sql SQL script file to create a test database on the remote server.
2. Set the hostname or IP, port number, username and password. You migth need to create a new database user for this purpose.
[You will need to create SSL certificates for the database server and client in order to test SSL Feature on the MySQL Server.]
3. If everthing is set build and run in your QtCreator.

If everything goes well you will recieve the following feedback from your terminal:
<center>

<a href="https://lnrsoft.com/wp-content/uploads/2017/08/app_output.png"><img class="aligncenter size-full wp-image-2601" src="https://lnrsoft.com/wp-content/uploads/2017/08/app_output.png" alt="" width="725" height="180" /></a><a href="https://lnrsoft.com/wp-content/uploads/2017/08/app_output.png"></a>

<a href="https://lnrsoft.com/wp-content/uploads/2017/08/app_output2.png"><img class="aligncenter size-full wp-image-2599" src="https://lnrsoft.com/wp-content/uploads/2017/08/app_output2.png" alt="" width="710" height="224" /></a>
</center>

MySQL DB connection test tool was created and written by Roland Ihasz and it is licensed under the GNU General Public License (GPL) Version 2 or above.

Updated: 12-Aug-2017
