## Modell erstellen

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
    "DefaultConnection": "server=localhost; port=3306; database=test; user=root; password=Wxp@Mysql; Persist Security Info=False; Connect Timeout=300"
  },

```

