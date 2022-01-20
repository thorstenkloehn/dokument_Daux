## Vorhanden Datenbank Erstellen

```
dotnet ef dbcontext scaffold "Server=localhost;User=root;Password=Test;Database=asp" "Pomelo.EntityFrameworkCore.MySql" --context-dir=data -d -o models
dotnet ef migrations add Version_Name
dotnet ef database update
```

