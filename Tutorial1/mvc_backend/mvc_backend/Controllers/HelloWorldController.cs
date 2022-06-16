using Microsoft.AspNetCore.Mvc;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace mvc_backend.Controllers
{
    public class HelloWorldController : Controller
    {
        public String Index()
        {
            return "This is the index page";
        }

        public String Hello()
        {
            return "Whos's there";
        }
    }
}
