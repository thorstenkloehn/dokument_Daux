## Modell erstellen

### Gerüstbau 
```
dotnet ef dbcontext scaffold "Server=localhost;User=root;Password=Test;Database=thorsten" "Pomelo.EntityFrameworkCore.MySql"
```
## Datenbank migration

```
dotnet add package Pomelo.EntityFrameworkCore.MySql --version 6.0.0
dotnet ef migrations add Name
dotnet ef database update 
```
## config Datei 
```
{
  "ConnectionStrings": {
    "DefaultConnection": "server=localhost; port=3306; database=asp; user=root; password=Test;"
  },

```

## Program.cs

```
  options.UseMySql(connectionString,ServerVersion.Parse("8.0.28-mysql")));


```
